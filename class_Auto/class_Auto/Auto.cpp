#include "Auto.h"
#include<iostream>
#include<string>

using namespace std;

// �������� �������� ���������
void Auto::setEngine(string n, double v, short p) {
	this->Ename = n;
	this->Volume = v;
	this->Power = p;
}
// �������� �������� ���
void Auto::setTransmission(string n, string t, short s) {
	this->Tname = n;
	this->Type = t;
	this->Speeds = s;
}
// �������� �������� ������
void Auto::setBody(string n, string c, short d) {
	this->Bname = n;
	this->color = c;
	this->doors = d;
}
//�������� �������� �����
void Auto::setWheels(string n, short d, short a) {
	this->Wname = n;
	this->diam = d;
	this->amount = a;
}
// ����� ������ ���������� �� ���� �� �����
void Auto::show_auto() const {
	cout << this->brand << " " << this->model << endl;
	Engine::show_info();
	Transmission::show_info();
	Body::show_info();
	Wheels::show_info();
	cout << endl;
}