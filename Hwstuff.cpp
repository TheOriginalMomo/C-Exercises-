/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Semester: 	SPRING 2017
** Assignment: 	Page 443 #14
** File: 	filename.cpp
** Description: For a given integer n>1, the smallest integer d>1 that divides n is a prime factor.
We can find the prime factorization of n if we find d and then replace n by the quotient of n divided by d, repeating this until n becomes 1.
Write a program that queries the user for a value for n, determines the prime factorization of n in this manner, but displays the prime factors in descending order.
**
** Author: 	Momo
** Date: 	3/29/2017
** -------------------------------------------------------------------------*/
//Compiler GNU GCC Complier
//Resources ADTS, Data Structures and Problem Solving with C++
#include <iostream>
#include <fstream>
using namespace std;
#include "stack.h"

int main ()
{
int num;
int d;
Stack Pile;
cout<<" Stack Created "<<boolalpha<<Pile.empty()<<endl; //Check and see if the Stack is empty

    cout<<"Enter a number for prime factorization"<<endl;
    cin>>num;



for(d=2; d<=num; d++) //Take the Number and divided by 2 and increment by 1
{
    while(num%d==0){ //The number divides by the divider until d becomes 0
    cout<<d<< " ";
        num=num/d;
         Pile.push(d);
    }

}


cout<<" Stack Empty? "<<Pile.empty()<<endl; //Checks to see if the stack is full
cout<<"contents in the Stack"<<endl;
Pile.display(cout); //Displays the stack contents




return 0;
}
