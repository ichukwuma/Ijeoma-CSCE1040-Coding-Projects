//#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include "student.h"
#include "bubble.h"

//using namespace std;
/*
Ijeoma Chukwuma
CSCE1040.002 Homework 1
Implementation Files: hwk1.c,bubble.c
Header Files: student.h,bubble.h
Data Files:grades.txt
Compile and execute: gcc hwk1.c bubble.c 

./a.out < grades.txt

Program desc: sorts out mean of student grades and arranges them in decending order
this code uses call to header files and structures with scanf and printf
This code also calculates the mean,median max/min of the classStats struct from accessing data from
studentArr (The student Array).
*/

struct classStats
      {
        float mean;
        float min;
        float max;
        float median;
        char* name;
     };


int main()
{

 struct classStats stats;



//array using malloc of 19 students
student *studentArr[19];

//for CSCE1040
//allocating memory for CSCE1040
stats.name=(char*)malloc(sizeof(char*));
scanf("%s" ,stats.name);

//scanf begins
for(int i=0; i < 19; i++)
{
  //space for student data type
  studentArr[i] = (student*)malloc(19*sizeof(student));

  //space for first and last name
  studentArr[i]->first=(char*)malloc(50*sizeof(char*));
  studentArr[i]->last=(char*)malloc(50*sizeof(char*));

  scanf("%s %s %d %d %d",studentArr[i]->first,studentArr[i]->last,
  &studentArr[i]->exam1,&studentArr[i]->exam2,&studentArr[i]->exam3);

  //mean calculation
  studentArr[i]->mean = (studentArr[i]->exam1+studentArr[i]->exam2+studentArr[i]->exam3)/3.0;

}//end of first scanf for loop

//calling bubble function here:
bubble(studentArr,19);


//finding total mean of class:
float sumOfMean;

for(int i = 0; i < 19; i++)
{
  sumOfMean += studentArr[i]->mean/19;
}
stats.mean = sumOfMean;

//finding max and min here
stats.min=stats.max=studentArr[0]->mean;
//https://javatutoring.com/c-program-find-maximum-minimum-element-in-array/


for(int i = 1; i < 19; i++)
{
  if(stats.min > studentArr[i]->mean)
  {
    stats.min = studentArr[i]->mean;
  }
  if(stats.max<studentArr[i]->mean);
  {
    stats.max = studentArr[i]->mean;
  }
}


// printing space
int width = 15;

//print csce1040,median,max,min
printf("%-*s %s %.2f\t %s %.2f %s %.2f %s %.2f\n",width,stats.name, "Median:",stats.median = studentArr[19/2]->mean,
 "Mean: ",stats.mean, "Min: ",stats.min, "Max: ",stats.max

);


// printing stuff after CSCE1040
for(int i =0; i<19; i++)
{
  printf("%-*s %-*s %6.2f\n",width,studentArr[i]->first,width,studentArr[i]->last,
  studentArr[i]->mean);
}

//free here: 
for(int i =0; i < 19; i ++)
{
  free(studentArr[i]->first);
  free(studentArr[i]->last);
  free(studentArr[i]);
  
}
    return 0;
}
