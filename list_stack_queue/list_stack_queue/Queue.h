#pragma once
#include<iostream>
#include"List.h"
using namespace std;

// ������ ������ �������
template <typename T>
class Queue : public List<T> {
public:
	// ����������� �� ���������
	Queue(int l) : List<T>(l) {}
	// ����� ��������� �������� � ������
	virtual void Add(const T elm) {
		if (!this->isFull()) {
			this->last++;
			this->arr[this->last] = elm;

		}
	};
	// ����� ������ ������������� �������� �� ������
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