#pragma once
#include<string>
using namespace std;

// класс колеса
class Wheels
{
protected:
	string Wname{ 0 };
	short diam{ 0 };
	short amount{ 0 };
public:
	// конструкторы с параметрами и по умолчанию
	Wheels(string n, short d, short a) : Wname{ n }, diam{ d },amount{ a } {}
	Wheels() {}
	// описание виртуального метода показа информации о колесах на экран
	virtual void show_info() const;
};