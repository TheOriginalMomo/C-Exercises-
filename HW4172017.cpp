/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Semester: 	SPRING 2017
** Assignment: 	Page 583
** File: 	filename.cpp
** Description: The investment company of Pickum & Loozem has been recording the trading price of a particular stock over a 15-day period.
Write a program that queries the user for these prices and stores them in a sequential container.  The program must find and display:


 The trading range (the lowest and highest prices recorded).
 A sequence that shows how much the price rose or fell each day.
**
** Author: 	Momo
** Date: 	4/17/2017
** -------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <algorithm>



using namespace std;



int main()
{

float minsale;
float maxsale;


int stockprices[15]; //To store the prices in sequential order
int i;
int stockdifference[15]; //difference for each day

cout<<"Enter the price for a particular stock over a 15-day period"<<endl;
for (i=0.0; i<15; i++)
{
    printf("\n Day %d :",i+1);
    scanf("%d",&stockprices[i]);
}

//Trading range

cout<<"Largest Price "<<*std::max_element(stockprices,stockprices+15)<<endl;
cout<<"Smallest Price "<<*std::min_element(stockprices,stockprices+15) <<endl;











for (i=0; i<15; i++){
    if(i==0)

    {
       stockdifference[i]=stockprices[i];
    }

    else
    {
        stockdifference[i]=stockprices[i]-stockprices[i+1];
    }

}
    for(int i=0; i<15; i++)

    {
        if(stockdifference[i]<0) //Stock Prices increased or decreased
        {
               cout<<"Day"<<(i+1)<<" Sales fell by "<<stockdifference[i]<<endl;

        }



        else
            cout<<"Day"<<(i+1)<<" Sales increased by "<<abs(stockdifference[i])<<endl;
    }  cout<<endl;


return 0;
}



