#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <class T> class Array {

	private:
		T *arr;
		unsigned int numele;
	public:
		// Costructors and Destructor
			Array();
			~Array();
			Array(unsigned int n);
			Array(Array const& src);
			Array &operator=(Array const& src);
			T &operator[](unsigned int index);
		// Member function
			unsigned int size();
	
		class IndexOutofbounds: public std::exception {
			public:
				const char* what() const throw() {
					return ("Out of Bounds index!!");
				}
		};
};

template <class T> Array<T>::Array() {
	this->arr = new T();
}

template <class T> Array<T>::~Array() {
	delete[] this->arr;
}

template <class T> Array<T>::Array(unsigned int n) {
	this->arr = new T[n]();
	this->numele = n;
}

template <class T> Array<T>::Array(const Array &f){
	this->numele = f.numele;
	this->arr = new T[f.numele];
	for (unsigned int i = 0; i < this->numele; i++)
		this->arr[i] = f.arr[i];
}

template <class T> Array<T> &Array<T>::operator=(Array const &f) {
	if (*this != f)
	{
		this->numele = f.numele;
		this->arr = new T[f.numele];
		for (unsigned int i = 0; i < this->numele; i++)
			this->arr[i] = f.arr[i];
	}
	return (*this);
}

template <class T> T& Array<T>::operator[](unsigned int index) {
	if (index >= this->numele)
		throw Array::IndexOutofbounds();
	return (this->arr[index]);
}

template <class T> unsigned int Array<T>::size() {
	return (this->numele);
}

#endif

/*
• Construction with no parameter: Creates an empty array.
• Construction with an unsigned int n as a parameter: Creates an array of n elements
initialized by default.
Tip: Try to compile int * a = new int(); then display *a.
• Construction by copy and assignment operator. In both cases, modifying either the
original array or its copy after copying musn’t affect the other array.
• You MUST use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. Your program must never access nonallocated memory.
• Elements can be accessed through the subscript operator: [ ].
• When accessing an element with the [ ] operator, if its index is out of bounds, an
std::exception is thrown.
• A member function size() that returns the number of elements in the array. This
member function takes no parameter and musn’t modify the current instance.
*/