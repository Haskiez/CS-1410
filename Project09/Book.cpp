#include "Book.h"


// Default CTOR
// Purpose: To set members to default values
// Parameters: None
// Returns: None
Book::Book()
{
	title = "???";
	author = "???";
	price = -1.0;
}

// Parameterized CTOR
// Purpose: To set data members to desired values
// Parameters: string for title, string for author, and string for price
// Returns: None
Book::Book(string _title, string _author, double _price)
{
	title = _title;
	author = _author;
	price = _price;
}

// Getter for Title
// Purpose: To return the value stored in title
// Parameters: None
// Returns: the string title
string Book::getTitle() const
{
	return title;
}

// Setter for Title
// Purpose: To set the title to a desired value
// Parameters: string for title
// Returns: None
void Book::setTitle(string _title)
{
	title = _title;
}

// Getter for Author
// Purpose: To return the value stored in author
// Parameters: None
// Returns: the string author
string Book::getAuthor() const
{
	return author;
}

// Setter for Author
// Purpose: To set the author to a desired value
// Parameters: string for Author
// Returns: None
void Book::setAuthor(string _author)
{
	author = _author;
}

// Getter for Price
// Purpose: To get the value stored in price
// Parameters: None
// Returns: the double price
double Book::getPrice() const
{
	return price;
}

// Setter for Price
// Purpose: To set the price to a desired value
// Parameters: double for price
// Returns: None
void Book::setPrice(double _price)
{
	price = _price;
}

// Default DTOR
// Purpose: To delete a book object
// Parameters: None
// Returns: None
Book::~Book()
{
	// TODO
}
