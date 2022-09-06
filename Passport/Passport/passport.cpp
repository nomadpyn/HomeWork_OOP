#include<iostream>
#include<string>

using namespace std;
// класс Паспорт (базовый)
class Passport {
protected:
	string name{};
	string sname{};
	unsigned int dr[3]{ 1,1,1900 };
	static unsigned int np;
public:
// конструктор класса для обычного объекта Паспорт
	Passport(string nameP, string snameP, unsigned int dP, unsigned int mP, unsigned int yP) {
		this->name = nameP;
		this->sname = snameP;
		this->dr[0] = dP;
		this->dr[1] = mP;
		this->dr[2] = yP;
		this->np++;
	}
// конструктор по умолчания для создания загранпаспорта
	Passport() {}
// виртуальный метод вывода информации о гражданине на экран
	virtual void show_passport() {
		cout << "Bangladesh Passport:\n";
		cout << "Surname - " << this->sname << endl;
		cout << "Name - " << this->name << endl;
		cout << "Date of Birth - " << this->dr[0] << "." << this->dr[1] << "." << this->dr[2] << endl;
		cout << "Serial number - " << this->np << endl << endl;
	}
};
// класс Загранпаспорт (производный)
class Fpassport : public Passport {
	static unsigned int np_f;
	string visa_arr[10]{};
	unsigned int visa_full{ 0 };
public:
// конструктор для создания объекта загранпаспорт
	Fpassport(string nameP, string snameP, unsigned int dP, unsigned int mP, unsigned int yP) {
		this->name = nameP;
		this->sname = snameP;
		this->dr[0] = dP;
		this->dr[1] = mP;
		this->dr[2] = yP;
		this->np_f++;
	}
//виртуальный метод для вывода информации о гражданине на экран
	virtual void show_passport() {
		cout << "Bangladesh Foreign Passport:\n";
		cout << "Surname - " << this->sname << endl;
		cout << "Name - " << this->name << endl;
		cout << "Date of Birth - " << this->dr[0] << "." << this->dr[1] << "." << this->dr[2] << endl;
		cout << "Serial number - " << this->np_f << endl;
		if (this->visa_full == 0) {
			cout << "No visa for this passport" << endl << endl;
		}
		else {
			cout << "Visas:\n";
			for (int i = 0; i < this->visa_full; i++)
				cout << this->visa_arr[i] << "\t";
			cout << endl;
		}

	}
// метод на проверку свободного места для виз в паспорте
	int fullVisa() {
		return this->visa_full == 10;
	}
// метод добавления информации о визе в паспорт
	void addVisa(string nameV) {
		if (!fullVisa()) {
			this->visa_arr[visa_full] = nameV;
			this->visa_full++;
		}
		else
			cout << "No place for visa in this passport" << endl<<endl;
	}
	
};
// объявление статических переменных для создания серийных номеров паспортов
unsigned int Passport::np{ 0 };
unsigned int Fpassport::np_f{ 0 };

int main() {

	return 0;
}