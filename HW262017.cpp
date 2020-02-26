/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Semester: 	Spring 2017
** Assignment: 	Hw
** File: 	filename.cpp
** Description:Query the user to fill two m x n static matrices,display them,
calculate and print a third matrix which is the sum of the first two.
**
** Author: 	Malania Wilson
** Date: 	2/6/2017
** -------------------------------------------------------------------------*/
//Resources Atds,C++ through gaming,


#include <iostream>
#include <stdio.h>


using namespace std;

int main ()
{
int row,col;
int item;
int Matrix[2][4];
int Matrix2[2][4];
int Sum[2][4];
int sumrow,sumcol;


cout<<"Enter Numbers into the first Array"<<endl;
for (row=0;row<2;row++){


    for(col=0;col<4;col++){

        scanf("%d",&Matrix[row][col]); //Reads the data that the user entered
                                      //The data is stored to be read

    }
}

for (row=0;row<2;row++){



    for(col=0;col<4;col++){
        printf(" \t%d ",Matrix[row][col]);//The t is the spacing
         //Formats the the output using a certain specifier,
      }                                      //Single Integer
    printf(" \n "); //Reads the data with a new line
cout<<endl; //The data is spaced after it is displayed



}

cout<<"Enter Numbers into the Second Array"<<endl;
for (row=0;row<2;row++){


    for(col=0;col<4;col++){

        scanf("%d",&Matrix2[row][col]); //Reads the data that the user entered

    }
}

for (row=0;row<2;row++){



    for(col=0;col<4;col++){
        printf(" \t%d ",Matrix2[row][col]);//The t is the spacing
         //Formats the the output using a certain specifier,
      }                                      //Single Integer
    printf(" \n "); //Reads the data with a new line
cout<<endl; //The data is spaced




}

cout<<"The sum of the Matrices"<<endl;

for (sumrow=0;sumrow<row;sumrow++){  //Created rows and columns for the new Matrix
for (sumcol=0;sumcol<col;sumcol++){

Sum[sumrow][sumcol]=Matrix[sumrow][sumcol]+Matrix2[sumrow][sumcol]; //The new rows and columns are the new values
                                                                    //The First Matrix and the Second Matrix already have rows and columns
printf(" \t%d ",Sum[sumrow][sumcol]); //Reads the new array and prints decimals integers


}
printf(" \n ");

}





return 0;
}







