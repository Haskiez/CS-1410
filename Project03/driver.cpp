// Driver Program
// CS 1410 Programming Project #3
// Copyright 2014, Utah Valley University
//Author: Roger deBry
// Date last modified: October 2015
// Implementation file for main
// =======================================
#include "Project03.h"

// Project 03 Implementation

int main()
{
	// Display Menu 
	int option = 0;
	const int CREATE = 1;
	const int READ = 2;

	cout << "\nCS 1410 Project 3";
	cout << "\nSelect one of the following two options: ";
	cout << "\n   1 - create a test file";
	cout << "\n   2 - read the test file and display the results";
	cout << "\n>> ";

	// run the selected option
	cin >> option;
	if (option == CREATE)
	{
		createTestFile();
		cout << "\nTest file has been created.";
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

void displayBooks(const vector<Book>& books)
{
	// set up cout to display currency
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// display heading
	cout << "\nRecommended Reading List\n";


	// display each account
	for (unsigned i = 0; i < books.size(); i++)
	{
		Author p = books[i].getAuthor();
		cout << books[i].getTitle() << '\n';
		cout << p.getName() << '\n';
		cout << p.getAddress() << '\n';
		cout << books[i].getPages() << " pages\n";
		cout << '$' << books[i].getPrice() << "\n\n\n";
	}
}

// This code is provided for you. It creates the test file.
void createTestFile()
{
	// create a vector for storing the account objects
	vector<Book> myBooks;

	// create three Author objects
	Author p1("J.K.Rowling", "Edinburgh, Scotland");
	Author p2("Suzanne Collins", "Connecticut, USA");
	Author p3("J.R.R. Tolkien", "Bournmouth, England");

	// Create three Book objects
	Book b1(p1, "Harry Potter and the Sorcerer's Stone", 256, 24.95);
	Book b2(p2, "Mockingjay", 400, 12.99);
	Book b3(p3, "The Hobbit", 322, 14.29);

	// add the books to the vector
	myBooks.push_back(b1);
	myBooks.push_back(b2);
	myBooks.push_back(b3);

	// write the books to a file
	// the file will be in the same folder as the executable file
	// assume that the file opens
	ofstream outputFile;
	outputFile.open("bookData.txt");

	for (unsigned i = 0; i < myBooks.size(); ++i)
	{
		myBooks[i].writeData(outputFile);
	}
}

void readTestFile()
{
	// Vector of books
	vector<Book> books;

	// Use the openFile() to open the text file to be used.
	ifstream textFile;
	try
	{
		openFile(textFile, "bookData.txt");
	}
	catch (Exceptions e)
	{
		e.getMessage();
	}


	// Use a loop to read the data
	// Use exceptionBool to control loop
	bool exceptionBool;
	do
	{
		try
		{
			Author myTempAuthor;
			myTempAuthor.readData(textFile);
			// Read book information into book object
			Book myTempBook;
			myTempBook.setAuthor(myTempAuthor);
			myTempBook.readData(textFile);

			books.push_back(myTempBook);
			exceptionBool = false;
		}
		catch (Exceptions e)
		{
			e.getMessage();
			exceptionBool = true;
		}
	} while (!exceptionBool);

	// Display what was read
	displayBooks(books);
	textFile.close();

}

void openFile(ifstream& in, const string& _name)
{
	// Open the file if possible
	// If it can't be opened throw an exception
	in.open(_name);
	if (in.fail())
	{
		throw Exceptions(1);
	}
}
