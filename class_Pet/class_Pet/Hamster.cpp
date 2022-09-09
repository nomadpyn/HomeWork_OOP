#include "Hamster.h"
#include<iostream>
#include<string>

using namespace std;
// метод вывода имени животного
void Hamster::show() const {
	cout << "Hamster name - " << this->name << endl;
}
// метод вывода подвида животного
void Hamster::type() const {
	cout << "Subspecies of pet is " << this->subspecies << ". Color is " << this->color << endl;
}
// метод "голос" животного
void Hamster::sound() const {
	cout << this->name << " say Pi Pi Pi\n";
}