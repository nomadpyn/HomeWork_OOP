#pragma once
#include<iostream>
#include<vector>

using namespace std;
// функиция вывода вектора длиной 10 квадратами целых чисел
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
