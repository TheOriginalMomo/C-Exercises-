/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Semester: 	Spring 2017
** Assignment: 	Hw
** File: 	filename.cpp
** Description:Your program should query the user for the value to be searched for.
You can either hard wire data into the n x n matrix or permit the user to fill the matrix interactively.
Remember that a matrix is a static structure; it is not acceptable to set the size of the matrix at run-time;
it must be fixed at compile-time.
**
** Author: 	Momo
** Date: 	1/25/2017
** -------------------------------------------------------------------------*/

//Resources--ADTS, C++ through Gaming


#include <iostream>


using namespace std;


/* You must write a program that
      (1) creates and fills a matrix with positive integers
      (2) queries the user for a search value
      (3) reports whether or not the search value is in the matrix
      (4) the size of the matrix must be determined at compile-time

      */



int main ()
{
int row,col;
int item;
int Matrix[2][4]={{1,2,3,4},//Two rows and for columns to display
                {5,6,7,8}};

bool found=false;



for (row=0; row<2; row++){//Display the Array
    for(col=0; col<4; col++){
        cout << Matrix[row][col]<< " ";

    }

    cout<<endl; //Displays the array one a line that ends on four
} //displays the first row of elements




cout<<"Enter a positive that is in the Matrix"<<endl;
cin>>item;


for (row=0;row<2  && found==false; row++) {  //Made the boolean false
                                            //The loop did not find the right item in the array
                                            //The found has to be false because it did not find the item yet

for (col=0;col<4; col++){

        if(item==Matrix[row][col]) //If the item is in the Matrix the boolean value is now true
        {


        found=true;
        break;

}
}
}

if (found)
    cout<<"Item Found"<<endl;
else
    cout<<"Item not Found"<<endl;


return 0;
}






