/*
*CSCE 1040 Homework 3
*Section: 002
*Name : Ijeoma Chukwuma
*UNT email: ijeomachukwuma@my.unt.edu
*file name: main.cpp
*description: user input and run classes together
*Date submitted: 4/25/2022

*/

#include<iostream>
#include<string>
using namespace std;
#include "book.h"
#include "books.h"
#include <vector>
#include "patrons.h"
#include "patron.h"
#include "loans.h"
#include "loan.h"


int main()
{
//books object / variables
books booksObj;
char bookChoice;

//patrons object / variables
patrons patronsObj;
char patronsChoice;

//Switch for Main menu
bool menuSwitch = true;
char menuChoice;

while(menuSwitch)
{

cout<<"--------------------------------"<<endl;
cout<<"***LIBRARY MANAGEMENT SYSTEM***"<<endl;
cout<<"B. for book related entities"<<endl;
cout<<"P. for Patron related entities"<<endl;
cout<<"L. for Loan related entities"<<endl;
cout<<"CMD C. to Quit program"<<endl;//may tell them to cmd C
cout<<"--------------------------------"<<endl;
cin>>menuChoice;

switch(menuChoice)
{

case 'B':
cout<<"What would you like to do?"<<endl;
cout<<"-------------------------"<<endl;
cout<<"\n";

cout<<"a. add a book"<<endl;
cout<<"r. remove a book"<<endl;
cout<<"m. modify book info"<<endl;
cout<<"f. find a book"<<endl;
cout<<"p. print all books in library"<<endl;
cin>>bookChoice;

switch(bookChoice) {

case 'a':
booksObj.addbook();
break;

case 'f':
booksObj.FindBook();
break;

case 'r':
booksObj.deletebook();
break;

case 'p':
booksObj.PrintAll();
break;

case 'm':
booksObj.modifybook();
break;

default:
break;
	}//end of book choice switch
/*
case 'Q':
cout<<"You quit"<<endl;
return 1;
*/
	case 'L':
	cout<<"Currently WIP, CMD C to exit out"<<endl;
	break;
	
	case 'P':
	cout<<"A. add patron"<<endl;
	cout<<"O. print patrons"<<endl;
	cout<<"F. find patron"<<endl;
	cout<<"D. delete patron"<<endl;
	cout<<"M. modify patron"<<endl;
	cout<<"C. current books out"<<endl;
	cin>>patronsChoice;
		switch(patronsChoice)

		{
		case 'A':
		patronsObj.addPatron();
		break;
		
		case 'M':
		patronsObj.modifyPatron();
		break;
		
		case 'F':
		patronsObj.FindPatron();
		break;

		case 'O':
		patronsObj.PrintAllPatrons();
		break;
		
		case 'D':
		patronsObj.deletePatron();
		break;

		case 'C':
		break;

		default:
		break;
		}

default:
break;

}//end of menu switch
}//end of while
	return 0;
}
