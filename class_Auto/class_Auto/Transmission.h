#pragma once
#include<string>
using namespace std;

// класс кпп
class Transmission
{
protected:
	string Tname{ 0 };
	string Type{ 0 };
	short Speeds{ 0 };
public:
	// конструкторы с параметрами и по умолчанию
	Transmission(string n, string t, short s) : Tname{ n }, Type{ t }, Speeds{ s } {}
	Transmission() {}
	// описание виртуального метода показа информации о трансмиссии на экран
	virtual void show_info() const;
};