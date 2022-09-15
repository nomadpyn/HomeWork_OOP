#pragma once
#include<string>
#include<vector>

using namespace std;
// структура для создания элемента бинарного дерева
struct Elem {
	string number{};
	vector<string> fines{};
	Elem* right, * left, * parent;
};