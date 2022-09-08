#pragma once
#include<iostream>
#include"List.h"
using namespace std;

// шаблон класса Очередь
template <typename T>
class Queue : public List<T> {
public:
	// конструктор по умолчанию
	Queue(int l) : List<T>(l) {}
	// метод добавлния элемента в список
	virtual void Add(const T elm) {
		if (!this->isFull()) {
			this->last++;
			this->arr[this->last] = elm;

		}
	};
	// метод выдачи определенного элемента из списка
	virtual T Pop() {
		if (!this->isEmpty()) {
			T temp = this->arr[0];
			for (int i = 1; i < this->last+1; i++)
				this->arr[i - 1] = this->arr[i];
			this->last--;
			return temp;
		}
		else
			return - 1;
	};
};