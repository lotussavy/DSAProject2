/*
   This is the file that contains the layout of the class character.
   It contains all the attributes and prototype of the member functions


   Attributes Details
    name => String data type to hold the name of the character
    role => String data type to hold the role of the character
    hitPoints => integer data type to determine the health value of the character
    attackBonus => integer data type to determine the bonus value to be added while attacking
    damageBonus => integer data type to determine the bonus value to be subtracted from opponent hitpoints
    armorClass => integer data type to determine the strength of the armor of the character


   Member Functions
    Character() => Constructor to assign the default values to the attributes of the object
    void addDetails() => Function to assign the user entered value to the attributes
    void print(ostream&) => Function to print the details of the character
    void attack(Character &otherCharacter) => Function to attack the character
    void damage(int amount) => Function to reduce the opponent's hitPoints
    int getHealth() => Function that return the current hitPoints of the character
    string getName() => Function to return the name of the character
    string getRole() => Function to return the role of the character

*/

using namespace std;
#include<string>
#include<iostream>


class Character
{
    string name;
    string role;
    int hitPoints;
    int attackBonus;
    int damageBonus;
    int armorClass;

    public:
    Character();
    void addDetails();
    void print(ostream&);
    void attack(Character &otherCharacter);
    void damage(int amount);
    int getHealth();
    string getName();
    string getRole();

};
