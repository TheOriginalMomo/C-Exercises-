/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Semester: 	Spring 2017
** Assignment: 	Hw
** File: 	filename.cpp
** Description:Query the user for the name of a file.
Open the file, read it, and count and report the number of vowels found in the file.
**
** Author: 	Momo
** Date: 	2/17/2017
** -------------------------------------------------------------------------*/


#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include <cstdio>

using namespace std;

int main ()
{
int i=0;
 string characters;
 char ch;
 int vowelcounter=0; //Count the Vowels in the file.



//Input the Data
 cout<<"Enter the file name you wish to view : "; //User enter the file Location.
 string inputFileName;     //The Characters of the User input.
 getline(cin,inputFileName);//Get the name of the file.
ifstream fileFind;   //Open the input Steam.
fileFind.open(inputFileName.data()); //Establish the connection to the File.
assert( fileFind.is_open() ); //Check if the File opened.

//Output the Data
 while (!fileFind.eof())
  {ch=fileFind.get();
   characters.insert(i,1,ch);     //insert character at position i.
   i++;
    if(ch == 'a' || ch == 'e' ||  ch == 'o' ||  ch == 'i' || ch == 'u')  //If the File has any of these letters the counter will count them.
        vowelcounter++;

  }


cout<<characters;
cout<<"The amount of vowels in the file are "<<vowelcounter;



 return 0;

}
