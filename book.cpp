/*
*CSCE 1040 Homework 3
*Section: 002
*Name: Ijeoma Chukwuma
*UNT Email: ijeomachukwuma@my.unt.edu
*Date submitted: 4/25/2022
*file name: book.cpp
*Description: functions from book.h
*/

#include<iostream>
#include "book.h"
using namespace std;

book::book()
{
	string Author = " ";
	string Title = " ";
	long bookISBN = 000000;
	double Cost = 0.0;
	char CurrentStatusofBook = ' ';
	string Description = " ";
	int bookID = 0;
}
book::book(string Author, string Title, long bookISBN, double Cost,
		char CurrentStatusofBook,string Description, int bookID)
{
	this-> Author = Author;
	this-> Title = Title;
	this-> bookISBN = bookISBN;
	this-> Cost = Cost;
	this-> CurrentStatusofBook = CurrentStatusofBook;
	this-> Description = Description;
	this-> bookID = bookID;

}

void book::SetAuthor(string)
{
	this->Author = Author;

}
string book::GetAuthor(){return Author;}

void book::SetBookID(int)
{
	this->bookID = bookID;
}
int book::GetBookID(){return bookID;}


void book::SetISBN(long)
{
	this-> bookISBN = bookISBN;
}
long book::GetISBN(){return bookISBN;}

void book::SetCost(double)
{
	this-> Cost = Cost;
}
double book::GetCost(){return Cost;}

void book::SetTitle(string)
{
	this-> Title = Title;
}
string book::GetTitle(){return Title;}

void book::SetCurrentStatus(char)
{
	this-> CurrentStatusofBook = CurrentStatusofBook;
}
char book::GetCurrentStatus(){return CurrentStatusofBook;}

void book::SetDescription(string)
{
	this-> Description = Description;
}
string book::GetDescription(){return Description;}

