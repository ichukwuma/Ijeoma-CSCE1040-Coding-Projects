/*
*CSCE 1040 Homework 3
*Section: 002
*Name: Ijeoma Chukwuma
*UNT Email: Ijeomachukwuma@my.unt.edu
*Date Submitted: 4/25/2022

*File name: patron.h
*Description: Patron header file includes the patron cosntructor that
allows the patron to store data such as their name,current books out, 
their estimated fine and patron ID

*/
#include<iostream>
#ifndef PATRON_H_
#define PATRON_H_
using namespace std;
#include<string>

class patron{
	public:
		patron(); //default
		patron(string Name, long patronID, double patronFine,
			 int CurrentBooksOut);


		void SetPatronName(string);
		string GetPatronName();


		void SetPatronID(long);
		long GetPatronID();

		void SetPatronFine(double);
		double GetPatronFine();

		void SetPatronCurrentBooksOut(int);
		int GetPatronCurrentBooksOut();
		
//		patron* getNext();
//		void setNextPatron(patron*);



	private:
		string Name;
		long patronID;
		double patronFine;
		int CurrentBooksOut;
//		patron *next;




};
#endif
