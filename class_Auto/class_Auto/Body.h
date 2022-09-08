#pragma once
#include<string>
using namespace std;

// класс кузов
class Body
{
protected:
	string Bname{ 0 };
	string color{ 0 };
	short doors{ 0 };
public:
	// конструкторы с параметрами и по умолчанию
	Body(string n, string c, short d) : Bname{ n }, color{ c }, doors{ d } {}
	Body() {}
	// описание виртуального метода показа информации о кузове на экран
	virtual void show_info() const;
};