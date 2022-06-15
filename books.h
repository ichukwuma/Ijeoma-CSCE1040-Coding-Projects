/*

*CSCE 1040 Homework 3
Section:002
*Name: Ijeoma Chukwuma
*UNT Email: ijeomachukwuma@my.unt.edu
*Date submitted: 4/23/2022
*File name: books.h
Description: this file is books.h, part of the collection header for book.h

*/

#include <iostream>
#include<vector>
using namespace std;
#ifndef BOOKS_H_
#define BOOKS_H_


class books{
//ADD COST MEMBER DONT FORGET
	public:
		books();

		books(string title, int bISBN, string author);
		void addbook();
		void deletebook();
		void modifybook();
		void PrintAll();
		void FindBook();

	private:
		string title , author;
		int bISBN;
		vector<string> bookTitle;
		vector<string> bookAuthor;
		vector<int> bookISBN;







};
#endif
