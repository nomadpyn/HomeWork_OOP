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
// метод очистки списка
template <typename T>
void List<T>::Clear() {
	delete[] this->arr;
	arr = new T[this->max_l];
	last = -1;
}
// метод проверки на пустоту списка
template <typename T>
bool List<T>::isEmpty() const {
	return last == -1;
}
// метод проверки на полный список
template <typename T>
bool List<T>::isFull() const{
	return last == max_l-1;
}
// метод вывода количества элементов в списке
template <typename T>
int List<T>::GetCount() const {
	return last + 1;
}