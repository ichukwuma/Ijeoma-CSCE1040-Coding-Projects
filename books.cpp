#include<iostream>
#include "book.h"
#include "books.h"
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
/*
*CSCE 1040 Homework 3
Section:002
Name: Ijeoma Chukwuma
UNT Email: Ijeomachukwuma@my.unt.edu
Date Submitted: 4/25/2022
File name: books.cpp
Description: this file has functions for add,modify,delete and print entries
*/

books::books()
{
	string title = " ";
	int bISBN = 0;
	string author = " ";
}
books::books(string title, int bISBN, string author)
{
	this->title=title;
	this->author=author;
	this->bISBN = bISBN;

}

void books::addbook()
{

cout<<"Enter the following for your book: "<<endl;
cin.clear();
cin.ignore();


cout<<"Title?"<<endl;
getline(cin,title);
bookTitle.push_back(title);


cout<<"Author?"<<endl;
getline(cin,author);
bookAuthor.push_back(author);

cout<<"ISBN?"<<endl;
cin>>bISBN;
bookISBN.push_back(bISBN);

cout<<"Book Added!"<<endl;

cout<<"Title: "<<bookTitle.back()<<endl;
cout<<"Author: "<<bookAuthor.back()<<endl;
cout<<"Book ISBN: "<<bookISBN.back()<<endl;

}


void books::PrintAll()
{
cout<<"BOOK COLLECTION: "<<endl;
cout<<"--------------------------"<<endl;
	unsigned int i;
	for (i = 0; i <bookTitle.size(); ++i)
	{
		cout<<bookTitle.at(i)<<endl;
		cout<<bookAuthor.at(i)<<endl;
		cout<<bookISBN.at(i)<<endl;
	}

cout<<"--------------------------"<<endl;
}



void books::FindBook()
{

cout<<"Enter the book you're trying to find: "<<endl;
cin.ignore();
getline(cin,title);

vector<string>::iterator iter;
iter = find(bookTitle.begin(), bookTitle.end(), title);

	if(iter!= bookTitle.end())
	{
		cout<< *iter << " found " <<endl;
	}
	else
	{
		cout<< "Not found sorry ); "<<endl;
	}

}

void books::deletebook()
{
cout<<"Which book would you like to remove?"<<endl;
cin.clear();
cin.ignore();
getline(cin,title);
	for(int i = 0; i<bookTitle.size(); i++)
	{
	if(bookTitle.at(i)==title)
		{
		bookTitle.erase(bookTitle.begin() + i);
		bookAuthor.erase(bookAuthor.begin() + i);
		bookISBN.erase(bookISBN.begin() + i);
		}
	}
}

void books::modifybook()
{
char choiceChange;
//new temp variables
string tempTitle, tempAuthor;
int tempISBN;

	cout<<"What book would you like to edit?"<<endl;
	cin.clear();
	cin.ignore();


	getline(cin,title);
vector<string>::iterator iter2;
iter2 = find(bookTitle.begin(), bookTitle.end(),title);
	if(iter2 != bookTitle.end())
		{
		cout<<*iter2<<" found "<<endl;
		cout<<"t. to change title"<<endl;
		cout<<"a. to change author"<<endl;
		cout<<"i to change ISBN"<<endl;
		}
		else
		{

		cout<<"not found"<<endl;
		}



for(int i = 0; i < bookTitle.size(); i++)
{
cin>>choiceChange;

switch(choiceChange)
{

	case 't':{
	cout<<"What title would you like to change to?"<<endl;
	getline(cin,tempTitle);
	bookTitle.at(i) = tempTitle;
	break;
	}

	case 'a':{
	cout<<"What author would you like to change to?"<<endl;
	getline(cin,tempAuthor);
	bookAuthor.at(i) = tempAuthor;
	break;
	}

	case 'o':{
	cout<<"What is the new ISBN number you would like to change to?"<<endl;
	cin>>tempISBN;
	bookISBN.at(i) = tempISBN;
	break;
	}

	default: {
	cout<<"book not here"<<endl;
	break;

	}
	
}//end of switch
}//end of for


	}//end of function
