#pragma once

class Directory
{
	char name[64]{};
	char vlad[64]{};
	char phone[12]{};
	char adres[64]{};
	char data[64]{};
public:
// конструктор по умолчанию
	Directory(){}
// описание методов класса
	void create();
	void show() const;	
};

