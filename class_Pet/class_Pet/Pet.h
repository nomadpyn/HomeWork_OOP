#pragma once
#include<string>
// абстрактный базовый класс Домашнее животное
class Pet
{
protected:
	std::string name{ NULL };
	std::string subspecies{ NULL };
	std::string color{ NULL };
public:
// конструктор по умолчанию
	Pet(std::string n) {
		this->name = n;
	}
// виртуальные функции
	virtual void show() const = 0;
	virtual void sound() const = 0;
	virtual void type () const = 0;
};