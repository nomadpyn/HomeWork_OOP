#include "Dog.h"
#include<iostream>
#include<string>

using namespace std;
// метод вывода имени животного
void Dog::show() const {
	cout << "Dog name - " << this->name << endl;
}
// метод вывода подвида животного
void Dog::type() const {
	cout << "Subspecies of pet is " << this->subspecies << endl;
}
// метод "голос" животного
void Dog::sound() const {
	cout << this->name << " say Woof Woof\n";
}

