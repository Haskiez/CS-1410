#pragma once
#include "Node.h"
class List
{
private:
	Node* head;
	Node* tail;
	int size;

public:
	List();
	void push_front(Node*);
	void push_back(Node*);
	Node* pop_front();
	Node* pop_back();
	Node* getFirst() const;
	Node* getLast() const;
	int getSize() const;
	~List();
};

