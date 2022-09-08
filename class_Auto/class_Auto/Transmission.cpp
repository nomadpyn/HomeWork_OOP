#include "Transmission.h"
#include<iostream>
#include<string>

// виртуальный метод показа информации о трансмиссии на экран
void Transmission::show_info() const {
	cout << "Transmission name: " << this->Tname << ". ";
	cout << "Type: " << this->Type<< ". ";
	cout << this->Speeds << " speed.\n";
}