#include "Engine.h"
#include<iostream>
#include<string>

// виртуальный метод показа информации о двигатель на экран
void Engine::show_info() const {
	cout << "Engine name: " << this->Ename << ". ";
	cout << "Volume: " << this->Volume << " L. ";
	cout << "Power: " << this->Power << " HP.\n";
}