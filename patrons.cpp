/*
*CSCE 1040 Homework 3
*Section: 002
*Name :Ijeoma Chukwuma
*UNT Email: ijeomachukwuma@my.unt.edu
*Date submitted: 4/25/2022

*file name: patrons.cpp
*Description: working class for methods
*/

#include<iostream>
#include "patrons.h"
using namespace std;
#include<algorithm>
#include "patron.h"
#include<string>
#include<vector>

patrons::patrons()
{
	string patronName = " ";
	int booksOut = 0;
	int pID = 0;
}

patrons::patrons(int currentBooksOut, int pID, string name)
{
	this-> currentBooksOut = currentBooksOut;
	this-> pID = pID;
	this-> name = name;

}

void patrons::addPatron()
{
	cout<<"Enter the following for your book: "<<endl;
	cin.clear();
	cin.ignore();


cout<<"Name?"<<endl;
getline(cin,name);
patronName.push_back(name);


cout<<"ID?"<<endl;
cin>>pID;
patronID.push_back(pID);


cout<<"How many books checked out?"<<endl;
cin>>currentBooksOut;
booksOut.push_back(currentBooksOut);


cout<<"Patron Added!"<<endl;

cout<<"Name: "<<patronName.back()<<endl;
cout<<"ID: "<<patronID.back()<<endl;
//cout<<"Book ISBN: "<<bookISBN.back()<<endl;


}

void patrons::deletePatron()
{
	cout<<"Which patron would you like to remove?"<<endl;
cin.clear();
cin.ignore();
getline(cin,name);
        for(int i = 0; i<patronName.size(); i++)
        {
        if(patronName.at(i)==name)
                {
                patronName.erase(patronName.begin() + i);
                patronID.erase(patronID.begin() + i);
                booksOut.erase(booksOut.begin() + i);
                }
        }	

}
void patrons::modifyPatron()
{
char choiceChange;
//new temp variables
string tempName, tempID;

        cout<<"Which patron to edit?"<<endl;
        cin.clear();
        cin.ignore();


        getline(cin,name);
vector<string>::iterator iter2;
iter2 = find(patronName.begin(), patronName.end(),name);
        if(iter2 != patronName.end())
                {
                cout<<*iter2<<" found "<<endl;
                cout<<"n. to change name"<<endl;
                cout<<"o. to change author"<<endl;
           
                }
                else
                {

                cout<<"not found"<<endl;
                }


bool modSwitch = true;
while(modSwitch)
{
for(int i = 0; i < patronName.size(); i++)
{
cin>>choiceChange;
switch(choiceChange)
{

        case 'n':{
        cout<<"What name would you like to change to?"<<endl;
        getline(cin,tempName);
        patronName.at(i) = tempName;
        break;
        }


        case 'o':{
        cout<<"What is the new ID?"<<endl;
        cin>>tempID;
        patronName.at(i) = tempID;
        break;
        }

        default: {
        cout<<"patron not here"<<endl;
        break;

        }

}//end of switch
}//end of for
}//end of while  loop


}
void patrons::PrintAllPatrons()
{
	cout<<"PATRONS: "<<endl;
cout<<"--------------------------"<<endl;
        unsigned int i;
        for (i = 0; i <patronName.size(); ++i)
        {
                cout<<patronName.at(i)<<endl;
                cout<<patronID.at(i)<<endl;
                //cout<<bookISBN.at(i)<<endl;
        }

cout<<"--------------------------"<<endl;
}

void patrons::FindPatron()
{
cout<<"Enter the name of the Patron you're trying to find: "<<endl;
cin.ignore();
getline(cin,name);

vector<string>::iterator iter1;
iter1 = find(patronName.begin(), patronName.end(), name);

        if(iter1!= patronName.end())
        {
                cout<< *iter1 << " found " <<endl;
        }
        else
        {
                cout<< "Not found sorry ); "<<endl;
        }


}
