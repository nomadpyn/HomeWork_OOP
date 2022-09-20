#pragma once
#include<iostream>
#include<fstream>
#include<string>
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
//функция вычисления количества объектов в файле
int howManyObj() {
	ifstream fl("data.txt", ios::in| ios::binary);
	if (!fl) {
		cout << "File not found\n";
	}
	int count{0};
	while (!fl.eof()){
		fl.get(); 
		count++;
	}
	fl.close();
	return count/ sizeof(Directory);
}
// функция отображения всего справочника
void showFromFile() {
	int count = howManyObj();
	ifstream fl("data.txt", ios::in | ios::binary);
	Directory temp;
	for (int i = 0; i < count;i++) {
		fl.read(reinterpret_cast<char*>(&temp), sizeof(Directory));
		temp.show();
	}
	fl.close();
}
// фукнция поиска в справочнике по имени организации
void searchName(const char name[64]) {
	ifstream fl("data.txt", ios::in | ios::binary);
	int count = howManyObj();
	Directory temp;
	char name_t[64]{};
	char g{};
	for (int i = 0; i < count; i++) {
		fl.seekg(i * 268, ios::beg);
		for (int y = 0; y < 64; y++) {
			g = fl.get();
			name_t[y] = g;
			if (g == '\0')
				break;
		}
		if (strcmp(name_t,name)==0) {
			fl.seekg(i * 268, ios::beg);
			fl.read(reinterpret_cast<char*>(&temp), sizeof(Directory));
			temp.show();
		}
		
	}
	fl.close();
}