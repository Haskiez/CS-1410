// CS 1410 Programming Project #5
// Copyright 2014, Utah Valley University
//Author: Roger deBry
// Date last modified: October 2015
// Implementation file for main
// =======================================
#include "Header.h"


int main()
{
	// Display Menu 
	int option = 0;
	const int CREATE = 1;
	const int READ = 2;

	cout << "\nCS 1410 Project 5";
	cout << "\nSelect one of the following two options: ";
	cout << "\n   1 - create a test file";
	cout << "\n   2 - read the test file and display the results";
	cout << "\n>> ";

	// run the selected option
	cin >> option;
	if (option == CREATE)
	{
		createTestFile();
		cout << "\nTest file has been created." << endl;
	}
	else if (option == READ)
	{
		readTestFile();
	}
	else
	{
		cout << "\nInvalid option.";
	}

	system("PAUSE");
	return 0;
}

void displayBooks(const vector<Book*>& books)
{
	// set up cout to display currency
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// display heading
	cout << "\nRecommended Reading List\n";

	// You provide the rest of this code
	for (int i = 0; i < books.size(); i++)
	{
		cout << books[i]->getAuthor()->getName() << endl;
		cout << books[i]->getAuthor()->getAddress() << endl;
		cout << books[i]->getTitle() << endl;
		cout << books[i]->getPages() << endl;
		cout << books[i]->getPrice() << endl;
		AudioBook* aPtr = dynamic_cast<AudioBook*>(books[i]); // Neither Casts Work, both return null
		if (aPtr == NULL)
		{
			DigitalBook* bPtr = dynamic_cast<DigitalBook*>(books[i]);
			if (bPtr == NULL)
			{
				cout << endl;
			}
			else
			{
				cout << "The format of this book is: " << bPtr->getFormat() << "." << endl << endl;
			}
		}
		else
		{
			cout << "The length of this book is: " << aPtr->getLength() << " minutes." << endl << endl;
		}
	}
}

void createTestFile()
{
	// create a vector for storing the account objects
	vector<Book*> myBooks;

	// add the books to the vector
	// create eveything on the heap because we need to work with Book*
	myBooks.push_back(new AudioBook(new Author("J.K.Rowling", "Edinburgh, Scotland"), "Harry Potter and the Sorcerer's Stone", 256, 24.95, 415));
	myBooks.push_back(new DigitalBook(new Author("Suzanne Collins", "Connecticut, USA"), "Mockingjay", 400, 12.99, "PDF"));
	myBooks.push_back(new Book(new Author("J.R.R. Tolkien", "Bournmouth, England"), "The Hobbit", 322, 14.29));

	// write the books to a file
	// the file will be in the same folder as the executable file
	// assume that the file opens
	ofstream outputFile;
	outputFile.open("bookData.txt");

	for (unsigned i = 0; i < myBooks.size(); ++i)
	{
		// Use RTTI to get the type of object being pointed to, cast returns null if cast fails
		// see if it is an audiobook and if it is, output "AUDIOBOOK" to the file to mark the output
		AudioBook* bp = dynamic_cast<AudioBook*>(myBooks[i]);
		if (bp)
		{
			outputFile << "AUDIOBOOK" << endl;
		}
		else
		{
			// see if it is a digital book, if it is output "DIGITALBOOK" to the file
			DigitalBook* bp = dynamic_cast<DigitalBook*>(myBooks[i]);
			if (bp)
			{
				outputFile << "DIGITALBOOK" << endl;
			}
			else // It is not one of the child classes, so it must be a base class (BOOK) object
			{
				outputFile << "BOOK" << endl;
			}
		}
		// now have the book object write itself to the file
		myBooks[i]->writeData(outputFile);
	}
}

void readTestFile()
{
	// Create a vector of book pointers to hold data
	vector<Book*> myBooks;

	// Open the input stream connected to the file that was created
	ifstream data;
	string dataTitle = "bookData.txt";
	openFile(data, dataTitle);
	string bookType;

	// Begin reading data from file
	do
	{
		getline(data, bookType);

		if (bookType == "DIGITALBOOK")
		{
			// Read it as a digital book
			// Using author to read author info first
			// Using book to read the common book info
			// Using digitalbooks to read the format
			DigitalBook *tempBook = new DigitalBook();
			Author *tempAuthor = new Author();
			tempAuthor->readData(data);
			tempBook->setAuthor(tempAuthor);
			tempBook->readData(data);
			myBooks.push_back(tempBook);

		}
		else if (bookType == "AUDIOBOOK")
		{
			// Read as an audio book much like the previous
			AudioBook *tempBook = new AudioBook();
			Author *tempAuthor = new Author();
			tempAuthor->readData(data);
			tempBook->setAuthor(tempAuthor);
			tempBook->readData(data);
			myBooks.push_back(tempBook);
		}
		else if (bookType == "BOOK")
		{
			// Read only as a normal book
			Book *tempBook = new Book();
			Author *tempAuthor = new Author();
			tempAuthor->readData(data);
			tempBook->setAuthor(tempAuthor);
			tempBook->readData(data);
			myBooks.push_back(tempBook);
		}
	} while (bookType != "\0");
	displayBooks(myBooks);
}

void openFile(ifstream& in, const string& _name)
{
	// try to open the file
	in.open(_name);

	// if the fail but is set, the file won't open ... throw an open error
	if (!in)
	{
		throw Exceptions(1);
	}
}
