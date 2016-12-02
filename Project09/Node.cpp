#include "Node.h"


// Default CTOR
// Purpose: To set data members to default values
// Parameters: None
// Returns: None
Node::Node()
{
	book = nullptr;
	next = nullptr;
}

// Parameterized CTOR
// Purpose: To set data members to desired values
// Parameters: a Node pointer and a Book pointer
// Returns: None
Node::Node(Book* _book)
{
	book = _book;
	next = nullptr;
}

// Getter for Next
// Purpose: To return the value stored in next
// Parameters: None
// Returns: Node pointer
Node* Node::getNextNode() const
{
	return next;
}

// Setter for Next
// Purpose: To set the value of next
// Parameters: A Node pointer
// Returns: None
void Node::setNext(Node* _next)
{
	next = _next;
}

// Getter for Book
// Purpose: To return the value of book
// Parameters: None
// Returns: A Boook pointer
Book* Node::getBook() const
{
	return book;
}

// Setter for Book
// Purpose: To set the value of book
// Parameters: A Book pointer
// Returns: None
void Node::setBook(Book* _book)
{
	book = _book;
}

// Default DTOR
// Purpose: To delete a single node
// Parameters: None
// Returns: None
Node::~Node()
{
	//TODO
}
