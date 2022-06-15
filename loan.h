/*
*CSCE 1040 Homework 3
*Section: 002
*Name: Ijeoma Chukwuma
*UNT Email: ijeomachukwuma@my.unt.edu
*Date submitted:4/25/2022

*File name: loan.h
*Description: This is the loan header class. It contains the loan ID,
book ID, Patron ID and allow for  a char variable to switch satus.
*/


#include<iostream>
#ifndef LOAN_H_
#define LOAN_H_
using namespace std;
#include<string>
#include<time.h>

class loan{
	public:

	loan();

/*
		loan(int lID, string loanBookID, int loanPatronID,
			string loanDueDate, char loanCurrentStatus);
*/
		void SetLoanID(int);
		int GetLoanID();

		void SetLoanBookID(int);
		int  GetLoanBookID();

		void SetLoanPatronID(int);
		int GetLoanPatronID();

		void SetLoanDueDate(string);
		string GetLoanDueDate();

		void SetLoanCurrentStatus(char);
		char GetLoanCurrentStatus();

//		void setPrev(loan*);
//		loan getPrevLoan();

		void setNext(loan*);
		loan getNextLoan();

		void setDueDate(time_t);
		time_t getDueDate();
		


	private:
		int lPID,lBID,loanID;
		time_t DueDate;
		char LoanCurrStat;
	

};
#endif
