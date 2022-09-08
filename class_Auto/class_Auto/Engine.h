#pragma once
#include<string>
using namespace std;

// класс двигатель
class Engine
{
protected:
	string Ename{0};
	double Volume{0};
	short Power{0};
public:
// конструкторы с параметрами и по умолчанию
	Engine(string n, double v, short p): Ename{n},Volume{v},Power{p}{}
	Engine(){}
// описание виртуального метода показа информации о двигатель на экран
	virtual void show_info() const;
};

