#include<iostream>
#include<string>
#include"func.h"
#include"Tree.h"

using namespace std;

int main() {
	
	Tree New;

	Elem A;
	A.number = "A579DH";
	A.fines.push_back("Too slow");
	New.Insert(&A);
	
	Elem B;
	B.number = "B547HG";
	B.fines.push_back("Too speed");
	New.Insert(&B);
	
	Elem C;
	C.number = "A579DH";
	C.fines.push_back("Not Belt");
	New.Insert(&C);
	
	Elem D;
	D.number = "A312LT";
	D.fines.push_back("Drink on drive");
	New.Insert(&D);
	New.print(&A);
	return 0;
}