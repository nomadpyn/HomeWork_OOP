#pragma once

class Directory
{
	char name[64]{};
	char vlad[64]{};
	char phone[12]{};
	char adres[64]{};
	char data[64]{};
public:
// ����������� �� ���������
	Directory(){}
// �������� ������� ������
	void create();
	void show() const;	
};

