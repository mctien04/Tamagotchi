#include "Cat.h"
#include <iostream>
using namespace std;

void Cat::jump()
{
  happyLevel += 10;
  hungerLevel += 5;
  boredomLevel -= 15;

  cout << "Jump! Jump! Jump! You did it!!" << endl;
  cout << "/\\_/\\\n";
  cout << "( o.o )\n";
  cout << " > ^ <\n";
}

void Cat::hunt() {
  happyLevel += 25;
  hungerLevel -= 20;
  boredomLevel -= 25;

  cout << "Go get 'em, hunter!" << endl;
  cout << "    /\\_/\\  \n";
  cout << "   / o o \\ \n";
  cout << "  (   \"   )\n";
  cout << "   \\~(*)~/ \n";
  cout << "    - ^ -  \n";
}

void Cat::playWithToy() {
happyLevel += 20;
hungerLevel += 5;
boredomLevel -= 25;
cout << "Time to play with your toy!" << endl;
  cout << "    /\\_/\\  \n";
  cout << "   / o o \\ \n";
  cout << "  (   \"   )\n";
  cout << "   \\~(*)~/ \n";
  cout << "    - ^ -  \n";
}


void Cat::DisplayStatus() {
   const int HUNGER_THRESHOLD = 40;
    const int BOREDOM_THRESHOLD = 40;
    const int HAPPINESS_THRESHOLD = 40;
    
    if (hungerLevel >= HUNGER_THRESHOLD) {
        cout << name << " is hungry!" << endl;
    }
    if (boredomLevel >= BOREDOM_THRESHOLD) {
        cout << name << " is bored!" << endl;
    }
    if (happyLevel <= HAPPINESS_THRESHOLD) {
        cout << name << " is unhappy!" << endl;
    }
}

void Cat::DisplayLevel() {
    cout << name << "'s happiness level is " << happyLevel << endl;
    cout << name << "'s hunger level is " << hungerLevel << endl;
    cout << name << "'s boredom level is " << boredomLevel << endl;
}
