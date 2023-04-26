#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &src) {
	this->vec_int = src.vec_int;
	this->deque_int = src.deque_int;
	return (*this);
}

PmergeMe::PmergeMe(const PmergeMe &src) {
	this->vec_int = src.vec_int;
	this->deque_int = src.deque_int;
}

void remove(std::vector<int> &v, std::deque<int> &v2)
{
	std::cout << "Checking duplicates..." << std::endl;
	std::vector<int>::iterator end = v.end();
	for (std::vector<int>::iterator it = v.begin(); it != end; ++it) {
		end = std::remove(it + 1, end, *it);
	}
	v.erase(end, v.end());

	std::deque<int>::iterator end2 = v2.end();
	for (std::deque<int>::iterator it = v2.begin(); it != end2; ++it) {
		end2 = std::remove(it + 1, end2, *it);
	}
	v2.erase(end2, v2.end());
	std::cout << "Duplicates removed" << std::endl;
}

PmergeMe::PmergeMe(char *input) {
	const char *delimiter = " ";
	char *str = strtok(input, delimiter);
	while (str != NULL) {
		if ((atoi (str) > 0 || str[0] == '0')) {
			vec_int.push_back(atoi(str));
			deque_int.push_back(atoi(str));
		}
		else
			throw PmergeMe::ErrorInput();
		str = strtok(NULL, delimiter);
	}
	remove(vec_int, deque_int);
}

void PmergeMe::merge(std::vector<int> &arr, int start, int middle, int end) {

	std::vector<int> leftArray(middle - start + 1);
	std::vector<int> rightArray(end - middle);

	for (size_t i = 0; i < leftArray.size(); ++i)
		leftArray[i] = arr[start + i];
	for (size_t i = 0; i < rightArray.size(); ++i)
		rightArray[i] = arr[middle + 1 + i];

	size_t leftIndex = 0, rightIndex = 0;
	size_t currentIndex = start;

	// compare each index of the subarrays adding the lowest value to the currentIndex
	while (leftIndex < leftArray.size() && rightIndex < rightArray.size()) {
		if (leftArray[leftIndex] <= rightArray[rightIndex]) {
			arr[currentIndex] = leftArray[leftIndex];
			leftIndex++;
		} else {
			arr[currentIndex] = rightArray[rightIndex];
			rightIndex++;
		}
		currentIndex++;
	}

	while (leftIndex < leftArray.size()) arr[currentIndex++] = leftArray[leftIndex++];
	while (rightIndex < rightArray.size()) arr[currentIndex++] = rightArray[rightIndex++];
}


void PmergeMe::mergeSort(std::vector<int> &arr, int start, int end) {
	if (start < end) {
		int middle = (start + end) / 2;

		mergeSort(arr, start, middle);
		mergeSort(arr, middle + 1, end);

		// merge the sorted halves
		merge(arr, start, middle, end);
	}
}

void PmergeMe::merge_deque(std::deque<int> &arr, int start, int middle, int end) {

	std::deque<int> leftArray(middle - start + 1);
	std::deque<int> rightArray(end - middle);

	for (size_t i = 0; i < leftArray.size(); ++i)
		leftArray[i] = arr[start + i];
	for (size_t i = 0; i < rightArray.size(); ++i)
		rightArray[i] = arr[middle + 1 + i];

	size_t leftIndex = 0, rightIndex = 0;
	size_t currentIndex = start;

	// compare each index of the subarrays adding the lowest value to the currentIndex
	while (leftIndex < leftArray.size() && rightIndex < rightArray.size()) {
		if (leftArray[leftIndex] <= rightArray[rightIndex]) {
			arr[currentIndex] = leftArray[leftIndex];
			leftIndex++;
		} else {
			arr[currentIndex] = rightArray[rightIndex];
			rightIndex++;
		}
		currentIndex++;
	}

	while (leftIndex < leftArray.size()) arr[currentIndex++] = leftArray[leftIndex++];
	while (rightIndex < rightArray.size()) arr[currentIndex++] = rightArray[rightIndex++];
}

void PmergeMe::mergeSort_deque(std::deque<int> &arr, int start, int end) {
	if (start < end) {
		int middle = (start + end) / 2;

		mergeSort_deque(arr, start, middle);
		mergeSort_deque(arr, middle + 1, end);
	
		// merge the sorted halves
		merge_deque(arr, start, middle, end);
	}
}

void	PmergeMe::vec_execute(){
	std::cout << "Before with vector: ";
	for (std::vector<int>::iterator i = vec_int.begin(); i != vec_int.end(); i++)
		std::cout <<  *i << " ";
	std::clock_t start_vec = std::clock();
	mergeSort(vec_int, 0, static_cast<int>(vec_int.size() - 1));
	std::clock_t end_vec = std::clock();
	double elapsed_vec = static_cast<double>(end_vec - start_vec);
	std::cout << "\nAfter with vector: ";
	for (std::vector<int>::iterator i = vec_int.begin(); i != vec_int.end(); i++)
		std::cout << *i << " ";
	std::cout << "\nTime to process a range of " << vec_int.size() << " with std::vector-> " << elapsed_vec << "ms\n";
	
}

void	PmergeMe::deque_execute(){
	std::cout << "Before with deque: ";
	for (std::deque<int>::iterator i = deque_int.begin(); i != deque_int.end(); i++)
		std::cout <<  *i << " ";
	std::clock_t start_deque = std::clock();
	mergeSort_deque(deque_int, 0, static_cast<int>(deque_int.size() - 1));
	std::clock_t end_deque = std::clock();
	double elapsed_deque = static_cast<double>(end_deque - start_deque);
	std::cout << "\nAfter with deque: ";
	for (std::deque<int>::iterator i = deque_int.begin(); i != deque_int.end(); i++)
		std::cout << *i << " ";
	std::cout << "\nTime to process a range of " << deque_int.size() << " with std::deque-> " << elapsed_deque << "ms\n";
}
