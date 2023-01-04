/*
Name: Kamal Acharya
UID:U00997907
Project Name: Fight!
Description:
In this project, I have built a combat simulator for a simplified roll playing game (RPG). 
I have created a C++ class for characters in the game, deatils of the class is given in the file character.h.
The details of the member functions is in the file character.cpp. These both files are used to import the class and detail of member functions. 
After that two character objects are created and then details of the character are entered by the users. At last a combat is simulatd between them. 
*/


#include<iostream>
#include<string>
#include<time.h>
#include "character.cpp"
using namespace std;


int main()
{

    // Creation of the objects and user prompted to enter the details of the characters
    Character First,Second;
    int attackTurn=0;
    srand(time(NULL));
    cout<<"First Character name?"<<endl;
    First.addDetails();
    cout<<"Second Character name?"<<endl;
    Second.addDetails();


    // Simulation of the combat
    cout<<"Simulated Combat:"<<endl;

    while (First.getHealth() > 0 && Second.getHealth()>0)
    {
        if (attackTurn==0)
        {
            cout<<First.getName()<<" attacks!"<<endl;
            First.attack(Second);
            attackTurn=1;
        }
        else
        {
            cout<<Second.getName()<<" attacks!"<<endl;
            Second.attack(First);
            attackTurn=0;
        }
        
    }
    

    return 0;
}