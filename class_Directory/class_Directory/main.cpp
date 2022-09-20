#include<iostream>
#include"Directory.h"
#include"func.h"

using namespace std;

int main() {

	Directory A;
	A.create();
	
	saveToFile(A);

	return 0;
}