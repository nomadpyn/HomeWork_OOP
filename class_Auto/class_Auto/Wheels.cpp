#include "Wheels.h"
#include<iostream>
#include<string>

// виртуальный метод показа информации о колесах на экран
void Wheels::show_info() const {
	cout << "Wheels name: " << this->Wname << ". ";
	cout << this->diam << " R. ";
	cout << this->amount << "wheels.\n";
}