#include "span.hpp"

Span::Span(unsigned int num){
	this->num = num;
	std::vector<int> temp;
	this->arr = temp;
}

Span::~Span(void){
}

void Span::addNumber(unsigned int i){
	if (this->arr.size() > this->num)
		throw(FullList());
	else
		this->arr.push_back(i);
}

long int Span::shortestSpan(){
	if (this->arr.size() <= 1)
		throw NoNumbers();
	int tmp[this->arr.size()];
	long int shortest = std::numeric_limits<long int>::max();
	std::sort(this->arr.begin(), this->arr.end());
	std::adjacent_difference(this->arr.begin(), this->arr.end(), tmp);
	for (size_t k = 1; k < this->arr.size(); k++)
		if(shortest > tmp[k])
			shortest = tmp[k];
	return (shortest);
}

long int Span::longestSpan(){
	if (this->arr.size() <= 1)
		throw NoNumbers();
	long int max = *std::max_element(this->arr.begin(), this->arr.end());
	long int min = *std::min_element(this->arr.begin(), this->arr.end());
	return (max - min);
}
