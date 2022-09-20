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
		cout << "\n* * * Company Number " << i + 1 << " * * *\n";
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
// функция поиска в файле по Владельцу
void searchOwner(const char vlad[64]) {
	ifstream fl("data.txt", ios::in | ios::binary);
	int count = howManyObj();
	Directory temp;
	char vlad_t[64]{};
	char g{};
	for (int i = 0; i < count; i++) {
		fl.seekg((i * 268)+64, ios::beg);
		for (int y = 0; y < 64; y++) {
			g = fl.get();
			vlad_t[y] = g;
			if (g == '\0')
				break;
		}
		if (strcmp(vlad_t, vlad) == 0) {
			fl.seekg((i * 268), ios::beg);
			fl.read(reinterpret_cast<char*>(&temp), sizeof(Directory));
			temp.show();
		}

	}
	fl.close();
}
// функция поиска по номеру телефона
void searchPhone(const char phone[12]) {
	ifstream fl("data.txt", ios::in | ios::binary);
	int count = howManyObj();
	Directory temp;
	char phone_t[12]{};
	char g{};
	for (int i = 0; i < count; i++) {
		fl.seekg((i * 268) + 128, ios::beg);
		for (int y = 0; y < 12; y++) {
			g = fl.get();
			phone_t[y] = g;
			if (g == '\0')
				break;
		}
		if (strcmp(phone_t, phone) == 0) {
			fl.seekg((i * 268), ios::beg);
			fl.read(reinterpret_cast<char*>(&temp), sizeof(Directory));
			temp.show();
		}

	}
	fl.close();
}
// функция поиска по роду деятельности
void searchData(const char data[64]) {
	ifstream fl("data.txt", ios::in | ios::binary);
	int count = howManyObj();
	Directory temp;
	char data_t[64]{};
	char g{};
	for (int i = 0; i < count; i++) {
		fl.seekg((i * 268) + 204, ios::beg);
		for (int y = 0; y < 64; y++) {
			g = fl.get();
			data_t[y] = g;
			if (g == '\0')
				break;
		}
		if (strcmp(data_t, data) == 0) {
			fl.seekg((i * 268), ios::beg);
			fl.read(reinterpret_cast<char*>(&temp), sizeof(Directory));
			temp.show();
		}

	}
	fl.close();
}

void searchMenu() {
	cout << "1 - By name. 2 - By owner. 3 - By phone. 4 - By Career.\n";
	int search{ 0 };
	cin >> search;
	cin.ignore();
	switch (search) {
	case 1: {
		char name[64]{};
		cin.getline(name, 64);
		searchName(name);
		break;
	}
	case 2: {
		char owner[64]{};
		cin.getline(owner, 64);
		searchOwner(owner);
		break;
	}
	case 3: {
		char phone[12]{};
		cin.getline(phone, 12);
		searchPhone(phone);
		break;
	}
	case 4: {
		char data[64]{};
		cin.getline(data, 64);
		searchData(data);
		break;
	}
	default:
		cout << "Back to menu\n";
		break;
	}
}
void menu() {
	int search{ 1 };
	while (search != 0) {
		cout << "\nWelcome in Company Directory\nWhat you want to do?\n";
		cout << "1-Show all Company's. 2 - Search company. 3 - Add company to Directory. 0 - Exit\n";
		cin >> search;
		cin.ignore();
		switch (search) {
		case 1: {
			showFromFile();
			break;
		}
		case 2: {
			searchMenu();
			break;
		}
		case 3: {
			Directory A;
			A.create();
			saveToFile(A);
			break;
		}
		case 0:
			cout << "Googbye\n";
			break;
		default:
			cout << "Try again\n";
			break;
		}
	}
}