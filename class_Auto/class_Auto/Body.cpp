#include "Body.h"
#include<iostream>
#include<string>

// виртуальный метод показа информации о кузове на экран
void Body::show_info() const {
	cout << "Body name: " << this->Bname << ". ";
	cout << "Color: " << this->color << ". ";
	cout << this->doors << " doors.\n";
}