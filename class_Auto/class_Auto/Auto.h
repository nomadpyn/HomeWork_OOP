#pragma once
#include"Engine.h"
#include"Transmission.h"
#include"Body.h"
#include"Wheels.h"
#include<string>

using namespace std;
// класс Авто созданный с помощью множественного наследования
class Auto : public Engine, public Transmission, public Body, public Wheels
{
protected:
	string brand{ 0 };
	string model{ 0 };
public:
// конструктор с параметрами
	Auto(string b, string m): brand{b}, model{m}{}
// описание методов класса
	void setEngine(string n, double v, short p);
	void setTransmission(string n, string t, short s);
	void setBody(string n, string c, short d);
	void setWheels(string n, short d, short a);
	void show_auto() const;
};

