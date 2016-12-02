#include "List.h"


// Default CTOR
// Purpose: To set default values
// Parameters: None
// Returns: None
List::List()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

// Push Front function
// Purpose: To add a node to the front of a list
// Parameters: A pointer to a node
// Returns: None
void List::push_front(Node* _node)
{
	// Declare tail if list is empty
	if (head == nullptr)
	{
		tail = _node;
	}
	// Make the node's next pointer point to the current first element in the list
	_node->setNext(head);

	// Make the new node the new head of the list
	head = _node;

	size++;
}

// Push Front function
// Purpose: To add a node to the back of a list
// Parameters: A pointer to a node
// Returns: None
void List::push_back(Node* _node) // some error here...
{
	if (head == nullptr)
	{
		// create a new list with the item and set it as head and tail
		head = _node;
		tail = _node;
	}
	else
	{
		tail->setNext(_node);
		tail = _node;
	}
	size++;
}


// Pop front function
// Purpose: To remove a node from the front of the list
// Parameters: None
// Returns: A node pointer
Node* List::pop_front()
{
	// Don't want to lose the pointer we are popping off
	Node* old = head;

	// Make the second node the new head of the list
	head = head->getNextNode();

	// Set the "deleted" node's next pointer to null.
	old->setNext(nullptr);

	size--;

	return old;
}


// Pop back function
// Purpose: To remove a node from the back of the list
// Parameters: None
// Returns: A node pointer
Node* List::pop_back() // Doesn't work if the list only has one object in it
{
	// If the list is empty then do nothing
	if (head == nullptr)
	{
		return nullptr;
	}
	else
	{
		// Dont want to lose the Node that is popped off
		Node* old = tail;

		// Find the pointer of the second to last node in list
		Node* newTail = nullptr;
		Node* currentTail = this->getFirst();

		while (currentTail->getNextNode() != nullptr)
		{
			newTail = currentTail;
			currentTail = currentTail->getNextNode();
		}

		// Assign the new tail
		// if newTail is still null (theres only one thing in the list) then need to set tail to nullptr
		// else tail should be newTail
		if (newTail == nullptr)
		{
			head = nullptr;
			tail = nullptr;
		}
		else
		{

			tail = newTail;
			newTail->setNext(nullptr);
		}
		size--;
		return old;
	}
}

// Getter for First
// Purpose: To return the pointer of the first node
// Parameters: None
// Returns: A node pointer
Node* List::getFirst() const
{
	return head;
}

// Getter for Last
// Purpose: To return the pointer of the last node
// Parameters: None
// Returns: A node pointer
Node* List::getLast() const
{
	return tail;
}

int List::getSize() const
{
	return size;
}

// Default Deconstructor
// Purpose: To delete a list
// Parameters: None
// Returns: None
List::~List()
{
	// TODO
}
