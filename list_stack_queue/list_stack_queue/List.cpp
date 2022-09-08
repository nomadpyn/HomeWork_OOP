#include "List.h"
#include<iostream>

using namespace std;

// конструктор с параметром, он же по умолчанию
template <typename T>
List<T>::List(const int l) {
	this->max_l = l;
	this->arr = new T [this->max_l];
}
// деструктор
template <typename T>
List<T>::~List() {
	delete[] this->arr;
}
