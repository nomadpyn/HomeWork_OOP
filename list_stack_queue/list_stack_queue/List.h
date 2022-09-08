#pragma once
#include<iostream>

using namespace std;

// шаблон класса Список
template <typename T>
class List
{
protected:
	T* arr;
	int max_l{ 0 };
	int last{ -1 };
public:
	// конструктор с параметром, он же по умолчанию
	List(int l) {
		this->max_l = l;
		this->arr = new T[l];
	}
	// деструктор
	~List() {
		delete[] this->arr;
	}
	// метод очистки списка
	virtual void Clear() {
		delete[] this->arr;
		arr = new T[this->max_l];
		last = -1;
	};
	// метод проверки на пустоту списка
	virtual bool isEmpty() const {
		return last == -1;
	};
	// метод проверки на полный список
	virtual bool isFull() {
		return last == max_l;
	};
	// метод вывода количества элементов в списке
	virtual int GetCount() {
		return last + 1;
	};
	// метод добавлния элемента в список
	virtual void Add(const T elm) {
		if (!isFull()) {
			last++;
			this->arr[last] = elm;
		}
	};
	// метод выдачи определенного элемента из списка
	virtual T Pop(const int pos) {
		if (pos > 0 && pos < this->max_l)
			return this->arr[pos - 1];
		else
			return this->arr[last];
	};
	// метод вывода всего списка на экран
	virtual void Show() {
		for (int i = 0; i < last+1; i++) {
			cout << this->arr[i] << " ";
		}
		cout << endl;
	};
};