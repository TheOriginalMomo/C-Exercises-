/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
** 
** Semester: 	FALL 2015
** Assignment: 	Final Project
** File: 	filename.cpp
** Description: Enter brief project description here.
**
** Author: 	Malania Wilson
** Date: 	12/1/2015
** -------------------------------------------------------------------------*/


#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void level1();
void storylevel1();
void storylevel1part2();
void storylevel1part3();
void boss1();
void EquipInventory();
void Cloudbossend();

string anwser(string prompt);
string askinformation(string prompt);


std::vector<std::string>inventory;
std::vector<std::string>::iterator iter;


class Boss
{
	

public:
int health;
int attackdamage;

Boss ()

{
	health=100;
	attackdamage=4;

}


public:

	int attackplayer ()

	{
		cout<<"The cloud attacked you, you took"<<attackdamage<<"damage"<<endl; 


	}

};
	class Warrior 
	{

	public:
		int health;
	

	};


Warrior Thewarrior;
Boss cloudBoss;
Boss MoneyCloudBoss;	

	int randomnumber=rand () %100 + 1; //generate random number
//random number between 1 and 100

int main()	
{

srand(static_cast<unsigned int>(time(0)));
//random number generator


	
	
	int karma=0;


	vector <string> Inventory;
	Inventory.push_back("1-Firewall");//weapon 1
	Inventory.push_back("2-Computer");//weapon 2
	Inventory.push_back("3-Syntax Errors");//weapon 3
	Inventory.push_back("4-Viruses");//weapon 4

cout<<"Welcome to this text-based adventure game called Computertopia"<<endl;
cout<<flush;
cout<<"Here are the rules of the game: You must pick a choice and be resprectfull"<<endl;
cout<<"Lets get started shall we?"<<endl;



string Fname=askinformation("Please Enter your name");


cout<<"That is a very interesting name you got there"<<"\n";

cout<<"Your name is "<<Fname<<"\n";
system("cls");
cout<<"Hello "<<Fname<<"I will be helping you through this journey and to defeat the cloud and the Money cloud"<<"\n";

cout<<"Here is your inventory"<<endl;
cout<<"You have "<<Inventory.size ()<< " items in your inventory"<<endl;
cout<<"\nYour items in your inventory: \n";
for (unsigned int i=0; i<
	Inventory.size(); ++i)
{
	cout<<Inventory[i]<<endl;
}


storylevel1();
level1();
storylevel1part2();
storylevel1part3();
boss1();
EquipInventory();
Cloudbossend();




	  system("pause");
return 0;
}
string askinformation(string prompt)
{
	string infotext;
	cout<< prompt;
	cin>>infotext;
	return infotext;
}
//function definition
void storylevel1 () {

cout<<"Here is the story:Long ago there was a mighty foe that destroyed everyone's hope of avoiding the cloud." <<endl;
cout<<"The cloud was like a plague, it would find you and add you to the cloud collection."<<endl; 
cout<<"The cloud has been around for thousands of years and today its reign is going to end. "<<endl;
cout<<"You(User) are a lone person that is tasked with a difficult task of defeating the cloud." <<endl;
cout<<"You must save all of the citizens of Computertopia. Will you do it?"<<endl;
}

void level1() {
int choice;
cout<<"Here is your first question: What is a function,Also here are your choices"<<endl;
cout<<"1-Returns a value"<<endl;
cout<<"2-I don't know"<<endl;
cout<<"3-quit"<<endl;

cin>>choice;
cin.ignore();
system("cls");


switch (choice)
{
case 1:
	cout<<"Good job you get to move on"<<endl;
	    cout<<"         |)`"<<endl;
        cout<<"      | |"<<endl;
        cout<<"      | |__"<<endl;
        cout<<"    /    (]__)"<<endl;
        cout<<"   /    (]___)"<<endl;
       cout <<"  /    (]___)"<<endl;
       cout <<"     ___(]_)"<<endl;
       cout <<      "/"<<endl;
       cout <<"     /"<<endl;




	break;

case 2:
	cout<<"Well MOG is very mad.Game over.Go back to Visual Basic"<<endl;
	system("pause");
	exit(2);
	break;

case 3:

	cout<<"Well that is a shame you couldn't continue...Go back to logic"<<endl;
	system("pause");
	exit(3);
	break;

default:
	cout<<"You make no sense"<<endl;
	exit(4);
	break;
	



}
}

void storylevel1part2 () {
	int choice2;
	cout<<"You are walking and you see a path split into two."<<endl;
	cout<<"Which path do you want to take"<<endl;
	cout<<"1-First Path"<<endl;
	cout<<"2-Second Path"<<endl;
	cin>>choice2;
cin.ignore();
system("cls");


	switch (choice2)
	{
case 1:
	cout<<"Good Job young warrior, you can go ahead"<<endl;

break;

case 2:
	cout<<"Ok then go.....Oh wait the cloud is here....Game over"<<endl;
cout<<" _ __"<<endl;
cout<<" __( =  =- _"<<endl;
cout<<"   (-       -  )__- -_"<<endl;
cout<<"  (  -=  - )   -     _)"<<endl;
cout<<"  (_-= _(    =-    _=-"<<endl;
cout<<"   -(     -    -  _)"<<endl;
cout<<"    -=__(__  _-)-"<<endl;
cout<<"           -=-"<<endl;

	system("PAUSE");
	exit(2);
	break;

default:
	cout<<"Go back to logic"<<endl;
	system("pause");
	exit(3);
	}
}

void storylevel1part3 () {
int choice3;
int karma=0;
cout<<"You keep walking and are meet with another obstacle."<<endl; 
cout<<"There is a dying computer who has just been asked how to zip a file by the cloud."<<endl; 
cout<<"It was so overwhelmed by that question that it couldn't go on. "<<endl;


cout<<"You have a choice to make younger warrior"<<endl;
cout<<"1-Save Computer"<<endl;
cout<<"2-Walk Away"<<endl;
cin>>choice3;
cin.ignore();
system("cls");


switch(choice3)
{
case 1:
	cout<<"Well I'm happy you saved the computer"<<endl;
	break;
case 2:
	cout<<"Well....I see what choices your going to make"<<endl;
	cout<<"Karma="<<(karma+1)<<endl;
	break;

default:
	cout<<"Invalid choice,be smarter or go back to the cloud class,I can send you there and skip all of this\n";
	system("cls");


		
	

}

};


void boss1 () {
	bool tryagain=false;
	do
	{
	int choice4;
	

cout<<"This is your last obstacle"<<endl;
	cout<<"Here is your last qustion"<<endl;
	cout<<"How do you declare user input"<<endl;
	cout<<"1-cin statements"<<endl;
	cout<<"2-Ask MOG"<<endl;
	cout<<"3-I dont know"<<endl;
	cin>>choice4;
		cin.ignore();
		system("cls");
	switch(choice4)
	{
case 1:
	cout<<"correct you are a student of computing"<<endl;
	break;
case 2:
	cout<<"its in the book"<<endl;
	system("pause");
	exit(2);
	break;
case 3:
	cout<<"You should know, what is wrong with you"<<endl;
	system("pause");
	exit (3);
	break;

default:
	cout<<"Try again"<<endl;
	tryagain=true;
	break;
	
}
	

	}	
	while(tryagain);
};

void EquipInventory () {
	bool tryweaponchoice=false;
	do
	{
int weaponchoice;//Input
vector<int> nums;
vector <string> Inventory;
	Inventory.push_back("1-Firewall");//weapon 1
	Inventory.push_back("2-Computer");//weapon 2
	Inventory.push_back("3-Syntax Errors");//weapon 3
	Inventory.push_back("4-Viruses");//weapon 4
/*cout<<"You are here to defeat the cloud young warrior"<<endl;
cout<<  "    1-Firewall"<<endl;//weapon 1
cout	   <<"2-Computer"<<endl;//weapon 2
cout	   <<"3-Syntax Errors"<<endl;//weapo
cout	   <<"4-Viruses"<<endl;//weapon 4*/


cout<<"What weapon would you like to use"<<endl;
cin>>weaponchoice;
cin.ignore ();
system("cls");
cout<<" _ __"<<endl;
cout<<" __( =  =- _"<<endl;
cout<<"   (-       -  )__- -_"<<endl;
cout<<"  (  -=  - )   -     _)"<<endl;
cout<<"  (_-= _(    =-    _=-"<<endl;
cout<<"   -(     -    -  _)"<<endl;
cout<<"    -=__(__  _-)-"<<endl;
cout<<"           -=-"<<endl;
system("pause");
cout<<"Your health is "<<(Thewarrior.health=100)<<endl;
//cout<<cloudBoss.attackplayer<<endl;                                  //Thewarrior.health-1<<endl;
	
switch(weaponchoice)
{

case 1:
	cout<<"You have eqiuped the"<<inventory[0]<<endl;
	break;
case 2:
	cout<<"You have eqiuped the"<<inventory[1]<<endl;
	break;
case 3:
	cout<<"You have eqiuped the"<<Inventory[3]<<endl;
	break;
case 4:
	cout<<"You have eqiuped the"<<inventory[4]<<endl; 
	break;
	
}
//for(int i=0;, i<inventory.size() i++){
	//The player will search the inventory to use a weapon
	}
	while (tryweaponchoice);
};

void Cloudbossend () {
	int attackchoice;
	vector<string> Inventory;
	Inventory.push_back("1-Firewall");//weapon 1
	Inventory.push_back("2-Computer");//weapon 2
	Inventory.push_back("3-Syntax Errors");//weapon 3
	Inventory.push_back("4-Viruses");//weapon 4
cout<<"The cloud health is"<<100<<endl;
cout<<"The cloud health is down by "<<randomnumber<<endl;
	cout<<" _ __"<<endl;
cout<<" __( =  =- _"<<endl;
cout<<"   (-       -  )__- -_"<<endl;
cout<<"  (  -=  - )   -     _)"<<endl;



cout<<"The cloud is almost defeated"<<endl;
cout<<"The cloud attacks you, you loose"<<Thewarrior.health-randomnumber<<"health"<<endl;
cout<<"What weapon would you like to choose"<<endl;
	 
	cout<<"1-Firewall"<<endl;
	cout<<"2-Computer"<<endl;
	cout<<"3-Syntax Errors"<<endl;
	cout<<"4-Viruses"<<endl;
   cin>>attackchoice;
	cin.ignore ();
	system("cls");
 
switch(attackchoice) {
case 1:
	cout<<"You attack the cloud with"<<Inventory[0]<<endl;
	break;
case 2:
	cout<<"You attack the cloud with"<<Inventory[1]<<endl;
	break;
case 3:
	cout<<"You attack the cloud with"<<Inventory[2]<<endl;
    break;
case 4:
	cout<<"You attack the cloud with"<<inventory[3]<<endl;
	break;

default:
	cout<<"Invalid Choice"<<endl;
system("pause");
break;
}
};