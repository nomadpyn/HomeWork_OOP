#include<iostream>
#include"Dog.h"
#include"Cat.h"
#include"Parrot.h"
#include"Hamster.h"

using namespace std;

void main() {
	Dog A("Barbos", "Dvorniaga", "Black");
	A.show();
	A.type();
	A.sound();
	Cat B("Murka", "Britain", "Grey");
	B.show();
	B.type();
	B.sound();
	Parrot C("Boris", "Yara", "Green");
	C.show();
	C.type();
	C.sound();
	Hamster D("Dima", "Svinka", "Yellow");
	D.show();
	D.type();
	D.sound();
}