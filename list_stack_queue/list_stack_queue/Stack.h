#pragma once
#include<iostream>
#include"List.h"
using namespace std;

// шаблон класса Стек
template <typename T>
class Stack : public List<T> {
public:
	// конструктор по умолчанию
	Stack(int l): List<T>(l) {}
	// метод добавлния элемента в список
	virtual void Add(const T elm) {
		if (!this->isFull()) {
			this->last++;
			this->arr[this->last] = elm;

		}
	};
	// метод выдачи определенного элемента из списка
	virtual T Pop() {
		if (!this->isEmpty())
			return this->arr[this->last--];
		else
			return 0;
	};
};