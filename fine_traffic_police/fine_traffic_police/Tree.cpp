#include "Tree.h"
#include<iostream>
#include<string>

// описание конструктора и деструктора

Tree::Tree() {
	this->root = NULL;
}

Tree::~Tree() {
	Del();
}
// метод вывода всего дерева на экран
void Tree::print(Elem * Node) {
	if (Node != 0) {
		print(Node->left);
		cout << Node->number << endl;
		for (int i = 0; i < Node->fines.size(); i++)
			cout << Node->fines[i] << " ";
		cout << endl;
		print(Node->right);
	}
}