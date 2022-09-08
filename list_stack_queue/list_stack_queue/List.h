#pragma once
// шаблон класса Список
template <typename T>
class List
{
protected:
	T* arr;
	int max_l{ 0 };
	int last{ 0 };
public:
// описание конструктора и деструктора
	List(const int l);
	~List();
};

