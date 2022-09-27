#include<iostream>
#include"func.h"

using namespace std;

int main() {
	
	setlocale(0, "");
	cout << "Вектор на 10 из квадратов целых чисел\n\n";
	vectorTen();
	cout << endl << endl;
	cout << "Таблица умножения\n\n";
	vectorTable();
	cout << endl << endl;
	return 0;
}
