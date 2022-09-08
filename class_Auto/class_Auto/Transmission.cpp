#include "Transmission.h"
#include<iostream>
#include<string>

// виртуальный метод показа информации о двигатель на экран
void Transmission::show_info() const {
	cout << "Transmission name: " << this->Tname << ". ";
	cout << "Type: " << this->Type<< ". ";
	cout << "How many speeds: " << this->Speeds << ".\n";
}