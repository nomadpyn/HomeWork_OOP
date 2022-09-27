#pragma once
#include<iostream>
#include<vector>

using namespace std;
// функция вывода вектора длиной 10 квадратами целых чисел
void vectorTen() {
	
	vector<int> data{};

	for (int i = 1; i <= 10; i++) {
		data.push_back(i * i);
	}

	vector<int>::iterator it = data.begin();

	while (it != data.end()) {
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
// функция вывода на консоль таблицы умножения в двумерном векторе
void vectorTable() {

	vector<vector<int>> table(10, vector <int> (10));

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			table[i][j] = ((i + 1) * (j + 1));
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << j+1 << " * " << i+1 << " = " << table[i][j] << "\t";
		}
		cout << endl;
	}
}