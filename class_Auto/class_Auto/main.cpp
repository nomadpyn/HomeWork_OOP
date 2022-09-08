#include<iostream>
#include<string>
#include"Auto.h"

using namespace std;

void main() {
	Auto R("Renault", "Logan");
	R.setEngine("K7M", 1.6, 85);
	R.setTransmission("JR3", "Mechanical", 5);
	R.setBody("Sedan", "Grey", 4);
	R.setWheels("Yokohama", 14, 4);
	R.show_auto();
}