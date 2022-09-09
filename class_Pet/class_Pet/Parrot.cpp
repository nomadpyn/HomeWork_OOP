#include "Parrot.h"
#include<iostream>
#include<string>

using namespace std;
// метод вывода имени животного
void Parrot::show() const {
	cout << "Parrot name - " << this->name << endl;
}
// метод вывода подвида животного
void Parrot::type() const {
	cout << "Subspecies of pet is " << this->subspecies << ". Color is " << this->color << endl;
}
// метод "голос" животного
void Parrot::sound() const {
	cout << this->name << " say Hello World\n";
}