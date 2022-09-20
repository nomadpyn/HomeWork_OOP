#pragma once
#include<iostream>
#include<fstream>
#include"Directory.h"

using namespace std;
// функция сохранения данных в файл
void saveToFile(Directory obj) {
	fstream fl("data.txt", ios::out | ios::binary | ios::app);

	if (!fl) {
		cout << "No file\n";
	}
	fl.write(reinterpret_cast<char*>(&obj), sizeof(Directory));
	fl.close();
}