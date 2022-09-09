#pragma once
#include<string>
#include"Pet.h"
// класс Кошка
class Cat : public Pet
{
public:
	// конструктор по умолчанию
	Cat(std::string n, std::string t, std::string c) : Pet(n) {
		this->subspecies = t;
		this->color = c;
	}
	// описание методов
	virtual void show() const;
	virtual void sound() const;
	virtual void type() const;
};
