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
// метод перехода к следующему узлу
Elem* Tree::Next(Elem* Node) {
	Elem* y = 0;
	if (Node != 0) {
		if (Node->right != NULL)
			return Min(Node->right);
		y = Node->parent;
		while (y != 0 && Node == y->right) {
			Node = y;
			y = y->parent;
		}
	}
	return y;
}
// метод перехода к предыдущему узлу
Elem* Tree::Previous(Elem* Node) {
	Elem* y = 0;
	if (Node != 0) {
		if (Node->left != NULL)
			return Max(Node->left);
		y = Node->parent;
		while (y != 0 && Node == y->left) {
			Node = y;
			y = y->parent;
		}
	}
	return y;
}
// метод нахождения корня дерева
Elem* Tree::GetRoot() {
	return this->root;
}
// метод вставки элемента в дерево
void Tree::Insert(Elem* nd) {
	if (search(this->root, nd->number) != 0) {
		Elem* y = search(this->root, nd->number);
		y->fines.push_back(nd->fines[0]);
	}
	else {
		nd->left = NULL;
		nd->right = NULL;
		Elem* y = NULL;
		Elem* Node = root;
		while (Node != 0) {
			y = Node;
			if (nd->number < Node->number)
				Node = Node->left;
			else
				Node = Node->right;
		}
			nd->parent = y;
			if (y == 0)
				root = nd;
			else {
				if (nd->number < y->number)
					y->left = nd;
				else
					y->right = nd;
			}
		}
	}
// метод удаления элемента из дерева
void Tree::Del(Elem* nd) {
	if (nd != 0) {
		Elem* Node, * y;
		if (nd->left == 0 || nd->right == 0)
			y = nd;
		else
			y = Next(nd);

		if (y->left != 0)
			Node = y->left;
		else
			Node = y->right;

		if (Node != 0)
			Node->parent = y->parent;

		if (y->parent == 0)
			root = Node;
		else {
			if (y == y->parent->left)
				y->parent->left = Node;
				y->parent->right = Node;
		}

		if (y != nd) {
			nd->number = y->number;
			nd->fines = y->fines;
		}
		delete y;
	}
	else
		while (root != 0)
			Del(root);
}