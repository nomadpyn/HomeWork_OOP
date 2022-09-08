#pragma once
// шаблон класса Список
template <typename T>
class List
{
protected:
	T* arr;
	int max_l{ 0 };
	int last{ -1 };
public:
// описание конструктора и деструктора
	List(const int l);
	~List();
// описание методов класса
	virtual void Clear();
	virtual bool isEmpty() const;
	virtual bool isFull() const;
	virtual int GetCount() const;
	virtual void Add(const T elm,const int pos);
	virtual T Pop();
	
};

