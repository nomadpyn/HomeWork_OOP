#pragma once
#include"func.h"
// класс бинарное дерево
class Tree
{
	Elem* root;
public:
// конструктор и деструктор
	Tree();
	~Tree();
// описание методов класса 
	void print(Elem* Node);
	Elem* search(Elem* Node, string key);
	Elem* Min(Elem* Node);
	Elem* Max(Elem* Node);
	Elem* Next(Elem* Node);
	Elem* Previous(Elem* Node);
	void Insert(Elem* nd);
	void Del(Elem* nd);
	Elem* GetRoot();
};

