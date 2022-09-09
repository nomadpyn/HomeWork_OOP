#pragma once
#include<string>

class Pet
{
protected:
	std::string name{};
public:
	Pet(std::string n) {
		this->name = n;
	}
	virtual void show() = 0;

};

