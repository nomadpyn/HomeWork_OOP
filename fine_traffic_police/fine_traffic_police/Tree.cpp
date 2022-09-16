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