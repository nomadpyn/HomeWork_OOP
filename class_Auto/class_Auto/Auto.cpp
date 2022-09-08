#include "Auto.h"
#include<iostream>
#include<string>

using namespace std;

// создание описания двигателя
void Auto::setEngine(string n, double v, short p) {
	this->Ename = n;
	this->Volume = v;
	this->Power = p;
}
// создание описания кпп
void Auto::setTransmission(string n, string t, short s) {
	this->Tname = n;
	this->Type = t;
	this->Speeds = s;
}
// создание описания кузова
void Auto::setBody(string n, string c, short d) {
	this->Bname = n;
	this->color = c;
	this->doors = d;
}
//создание описания колес
void Auto::setWheels(string n, short d, short a) {
	this->Wname = n;
	this->diam = d;
	this->amount = a;
}
// метод вывода информации об авто на экран
void Auto::show_auto() const {
	cout << this->brand << " " << this->model << endl;
	Engine::show_info();
	Transmission::show_info();
	Body::show_info();
	Wheels::show_info();
	cout << endl;
}