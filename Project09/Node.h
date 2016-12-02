#pragma once
#include "Book.h"

class Node
{
private:
	Node* next;
	Book* book;

public:
	Node();
	Node(Book*);
	Node* getNextNode() const;
	void setNext(Node*);
	Book* getBook() const;
	void setBook(Book*);
	~Node();
};

