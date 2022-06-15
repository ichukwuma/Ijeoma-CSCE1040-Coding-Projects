/*
*CSCE 1040 Homework 3
*Section: 002
*Name: Ijeoma Chukwuma
*UNT Email: Ijeomachukwuma@my.unt.edu
*Date submitted: 4/25/2022
*File name: patron.cpp
*Description: Functions for patron.h
*/

#include<iostream>
using namespace std;
#include "patron.h"

patron::patron()
{
	string Name = " ";
	long patronID = 000000;
	double patronFine = 0.0;
	int CurrentBooksOut = 0;
}
patron::patron(string Name, long patronID, double patronFine, int CurrentBooksOut)
{
	this-> Name = Name;
	this-> patronID = patronID;
	this-> patronFine = patronFine;
	this-> CurrentBooksOut = CurrentBooksOut;
}

void patron::SetPatronName(string)
{
	this-> Name = Name;
}
string patron::GetPatronName(){return Name;}

void patron::SetPatronID(long)
{
	this-> patronID = patronID;
}
long patron::GetPatronID(){return patronID;}

void patron::SetPatronFine(double)
{
	this-> patronFine = patronFine;
}
double patron::GetPatronFine(){return patronFine;}

void patron::SetPatronCurrentBooksOut(int)
{
	this-> CurrentBooksOut = CurrentBooksOut;
}
int patron::GetPatronCurrentBooksOut(){return CurrentBooksOut;}
