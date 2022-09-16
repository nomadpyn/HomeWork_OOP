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
// метод поиска элемента в дереве
Elem* Tree::search(Elem* Node, string key) {
	while (Node != 0 && key != Node->number) {
		if (key < Node->number)
			Node = Node->left;
		else
			Node = Node->right;
	}
	return Node;
}
// метод поиска самого "левого" узла дерева
Elem* Tree::Min(Elem* Node) {
	if (Node != 0) {
		while (Node->left != NULL)
			Node = Node->left;
		return Node;
	}
}
// метод поиска самого "правого" узла дерева
Elem* Tree::Max(Elem* Node) {
	if (Node != 0) {
		while (Node->right != NULL)
			Node = Node->right;
		return Node;
	}
}