#include<iostream>
#include<string>

using namespace std;

class Passport {
protected:
	string name{};
	string sname{};
	unsigned int dr[3]{ 1,1,1900 };
	static unsigned int np;
public:
	Passport(string nameP, string snameP, unsigned int dP, unsigned int mP, unsigned int yP) {
		this->name = nameP;
		this->sname = snameP;
		this->dr[0] = dP;
		this->dr[1] = mP;
		this->dr[2] = yP;
		this->np++;
	}
	Passport() {}
	virtual void show_passport() {
		cout << "Bangladesh Passport:\n";
		cout << "Surname - " << this->sname << endl;
		cout << "Name - " << this->name << endl;
		cout << "Date of Birth - " << this->dr[0] << "." << this->dr[1] << "." << this->dr[2] << endl;
		cout << "Serial number - " << this->np << endl << endl;
	}
};

class Fpassport : public Passport {
	static unsigned int np_f;
	string visa_arr[10]{};
	unsigned int visa_full{ 0 };
public:
	Fpassport(string nameP, string snameP, unsigned int dP, unsigned int mP, unsigned int yP) {
		this->name = nameP;
		this->sname = snameP;
		this->dr[0] = dP;
		this->dr[1] = mP;
		this->dr[2] = yP;
		this->np_f++;
	}
	virtual void show_passport() {
		cout << "Bangladesh Foreign Passport:\n";
		cout << "Surname - " << this->sname << endl;
		cout << "Name - " << this->name << endl;
		cout << "Date of Birth - " << this->dr[0] << "." << this->dr[1] << "." << this->dr[2] << endl;
		cout << "Serial number - " << this->np << endl << endl;
	}
};

unsigned int Passport::np{ 0 };
unsigned int Fpassport::np_f{ 0 };

int main() {

	
	return 0;
}