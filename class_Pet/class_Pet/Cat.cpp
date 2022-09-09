#include "Cat.h"
#include<iostream>
#include<string>

using namespace std;
// метод вывода имени животного
void Cat::show() const {
	cout << "Cat name - " << this->name << endl;
}
// метод вывода подвида животного
void Cat::type() const {
	cout << "Subspecies of pet is " << this->subspecies << ". Color is " << this->color << endl;
}
// метод "голос" животного
void Cat::sound() const {
	cout << this->name << " say Meow Meow\n";
}