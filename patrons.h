/*
*CSCE 1040 Homework 3 
*Section: 002
*UNT Email: ijeomachukwuma@my.unt.edu
*Date submitted: 25,April,2022
*File name: patrons.h
Description: part of the collections file thatll modiy,add,edit patron info
*/


#include<iostream>
using namespace std;
#include<vector>
#ifndef PATRONS_H_
#define PATRONS_H_

class patrons{
	public:

		patrons();
		patrons(int currentBooksOut, int pID, string name);
		void addPatron();
		void deletePatron();
		void modifyPatron();
		void FindPatron();
	//	void PrintPatronInfo();
		void PrintAllPatrons();


	private:
		int currentBooksOut;
		int pID;
		string name;
		vector<string> patronName;
		vector<int> patronID;
		vector<int> booksOut;




};
#endif
