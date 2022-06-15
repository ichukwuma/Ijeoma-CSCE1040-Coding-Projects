/*
*CSCE 1040 Homework 3
*Section: 002
*Name: Ijeoma Chukwuma
*UNT Email: ijeomachukwuma@my.unt.edu
*Date Submitted: 25,April,2022
*File name: loans.h
*Description: loans collection header thatll allow to check out a book
check in a book, list all overdue books, like all books for a patron,
recheck a book, and edit a loan, and report lost


*/

#include<iostream>
using namespace std;
#include "patrons.h"
#include "patron.h"
#ifndef LOANS_H_
#define LOANS_H_

class loans{
public:
	void PrintOverdue();
	void PrintPatronBooks();
	void EditLoan();
	void ReportLost();
	void recheckBook(bool);



};
#endif
