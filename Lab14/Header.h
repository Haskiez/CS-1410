#pragma once
#include <string>
using namespace std;


class Node
{
private:
	Node* next;
	string item;
	string unit;
	int num;

public:
	// Default Constructor
	Node();

	// Parameterized Constructor
	Node(Node*, string, string, int);

	// Getter for nextNode
	Node* getNextNode() const;

	// Setter for nextNode
	void setNextNode(Node*);

	// Getter for item
	string getItem() const;

	// Setter for item
	void setItem(string);

	// Getter for measurement
	string getUnit() const;

	// Setter for measurement
	void setUnit(string);

	// Getter for numItems
	int getNum() const;

	// Setter for numItems
	void setNum(int);

	// Deconstructor
	~Node();
};

class List
{
private:
	Node* head; // call it head
	Node* tail; // call it tail
	int size; // call it size

public:
	// Default constructor
	List();

	// push_front function
	void push_front(Node*);

	// push_back function
	void push_back(Node*);

	// pop_back function
	Node* pop_back();

	// pop_front function
	Node* pop_front();

	// getFirst function
	Node* getFirst() const;

	// getLast function
	Node* getLast() const;

	// getNumNodes function
	int getSize() const;

	// Deconstructor
	~List();
};
