/* 
This is the file that contain the definition of all the member functions of  class Character
*/

#include<iostream>
#include<string>
#include<time.h>
#include "character.h"

//Default Constructor to initialize the attributes of the object with the default values
Character::Character()
{
    name="";
    role="";
    hitPoints=0;
    attackBonus=0;
    damageBonus=0;
    armorClass=0;
}


//Function to read the input from the user and assign it to the appropriate attributes
void Character:: addDetails()
{
    cin>>this->name;
    cout<<endl;
    cout<<this->name<<"'s role?"<<endl;
    cin>>this->role;
    cout<<endl;
    cout<<this->name<<" the "<<this->role<<"'s hit points?"<<endl;
    cin>>this->hitPoints;
    cout<<endl;
    cout<<this->name<<" the "<<this->role<<"'s attack bonus?"<<endl;
    cin>>this->attackBonus;
    cout<<endl;
    cout<<this->name<<" the "<<this->role<<"'s damage bonus?"<<endl;
    cin>>this->damageBonus;
    cout<<endl;
    cout<<this->name<<" the "<<this->role<<"'s armor class?"<<endl;
    cin>>this->armorClass;
    cout<<endl;
    this->print(cout);
}


//Function to print the details of the character
void Character::print(ostream& output)
{
    output<<"Character Summary"<<endl;
    output<<"................."<<endl<<endl;
    output<<this->getName()<<" the "<<this->getRole()<<endl;
    output<<"HP: "<<this->getHealth()<<endl;
    output<<"AB: "<<this->attackBonus<<endl;
    output<<"DB: "<<this->damageBonus<<endl;
    output<<"AC: "<<this->armorClass<<endl<<endl;
}



//Fucntion to attack the opponent character
void Character:: attack(Character &otherCharacter)
{
    int randomValue,finalValue;
    string verdict;
    int hitValue;
    //srand(time(NULL));
    randomValue = (rand()%20) + 1; 
    finalValue=randomValue + this->attackBonus;
    if (finalValue >= otherCharacter.armorClass)
    {
        verdict="Hit";  
    }
    else
    {
        verdict="Miss";
    }
    cout<<"Attack roll: "<<randomValue<<" + "<<this->attackBonus<<" = "<<finalValue<<" --> "<<verdict<<endl;

    if (verdict.compare("Hit") ==0)
    {
        randomValue=(rand()%10)+1;
        hitValue= randomValue + this->damageBonus;
        cout<<"Damage: "<< randomValue <<" + "<< this->damageBonus<<" = "<<hitValue<<endl;
        otherCharacter.damage(hitValue);
        cout<<otherCharacter.getName()<<" has "<<otherCharacter.getHealth()<<" hit points remaining"<<endl<<endl;
    }
    else
    {
        cout<<endl;
    }

    if (otherCharacter.getHealth()==0)
    {
        cout<<this->getName()<<" wins!"<<endl;
    }
    
    
}


// Function to reduce the hitPoints of the opponent after attacking
void Character:: damage(int amount)
{
    this->hitPoints = this->hitPoints - amount;
    if (this->hitPoints < 0)
    {
        this->hitPoints=0;
    }
    
}



// Function to get the current hitPoints of the Character
int Character:: getHealth()
{
    return(this->hitPoints);
}


// Function to get the name of the character
string Character:: getName()
{
    return (this->name);
}


//Function to get the role of the character
string Character:: getRole()
{
    return (this->role);
}