/*
*CSCE 1040 Homework 3
*Section: 002
*Name: Ijeoma Chukwuma
*UNT Email: ijeomachukwuma@my.unt.edu
*Date submitted: 4/25/2022

*File name: book.h
*Description: This file includes the book constructor , that allows the user
to set and recevie the information of a book such as ISBN,Description,Author
,Title,Price, while a char for a future switch statement of a books status.
also getting next or prvious book item*/

#include<iostream>
#ifndef BOOK_H_
#define BOOK_H_
#include<string>
using namespace std;

class book{

	public:
//default constructor used
	book();

	book(string Author, string Title, long bookISBN, double Cost
		, char CurrentStatusofBook, string Description, int bookID);
	

	void SetAuthor(string);
	string GetAuthor();
	
//	void setNext(book *);
//	book *getNext();

//	void setPrev(book *);
//	book *getPrev();
	
	void SetBookID(int);
	int GetBookID();

	void SetTitle(string);
	string GetTitle();

	void SetISBN(long);
	long GetISBN();
	
	void SetCost(double);
	double GetCost();

	void SetCurrentStatus(char);
	char GetCurrentStatus();

	void SetDescription(string);
	string GetDescription();


	private:
		string Author;
		string Title;
		long bookISBN;
		double Cost;
		char CurrentStatusofBook; //I for in , O for Out
		string Description;
		int bookID;
//		book *prev, *next; 

};
#endif

