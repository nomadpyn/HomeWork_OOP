#include "Directory.h"
#include<iostream>

using namespace std;
// метод создания организации в справочнике
void Directory::create() {
	cout << "Enter name of company\n";
	cin.getline(this->name, 64);
	cout << "Enter name of owner\n";
	cin.getline(this->vlad, 64);
	cout << "Enter phone of company\n";
	cin.getline(this->phone, 12);
	cout << "Enter adress of company\n";
	cin.getline(this->adres, 64);
	cout << "Enter career of company\n";
	cin.getline(this->data, 64);
}
// метод вывода информации о организации на экран
void Directory::show() const {
	cout << "Name of company - " << this->name << endl;
	cout << "Owner of company - " << this->vlad << endl;
	cout << "Company phone - " << this->phone << endl;
	cout << "Adress of company - " << this->adres << endl;
	cout << "Career of company - " << this->data << endl;
}