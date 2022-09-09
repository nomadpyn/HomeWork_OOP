#pragma once
#include<string>
#include"Pet.h"
// класс Собака
class Dog : public Pet
{
public:
// конструктор по умолчанию
	Dog(std::string n, std::string t, std::string c) : Pet(n) {
		this->subspecies = t;
		this->color = c;
	}
// описание методов
	virtual void show() const;
	virtual void sound() const;
	virtual void type() const;
};