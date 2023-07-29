#include "Rabbit.h"
#include <iostream>
using namespace std;

void Rabbit::hop()
{
  happyLevel += 15;
  hungerLevel += 10;
  boredomLevel -= 20;

  cout << "Hop! Hop! Hoppity! Hop!" << endl;
  cout << " /\\ /|" << endl;
  cout << " \\ V/" << endl;
  cout << "  | \"\")" << endl;
  cout << "  /  |" << endl;
  cout << " /  \\\\" << endl;
  cout << "*(__\\_\\" << endl;
}

void Rabbit::dig() {
  happyLevel += 20;
  hungerLevel -= 15;
  boredomLevel -= 25;

  cout << "Dig, dig, dig! You found something!" << endl;
  cout << " /\\ /|" << endl;
  cout << " \\ V/" << endl;
  cout << "  | \"\")" << endl;
  cout << "  /  |" << endl;
  cout << " /  \\\\" << endl;
  cout << "*(__\\_\\" << endl;
}


void Rabbit::chew() {
happyLevel += 10;
hungerLevel += 15;
boredomLevel -= 15;

cout << "Chew, chew, chew! Yummy!" << endl;
 cout << " /\\ /|" << endl;
  cout << " \\ V/" << endl;
  cout << "  | \"\")" << endl;
  cout << "  /  |" << endl;
  cout << " /  \\\\" << endl;
  cout << "*(__\\_\\" << endl;
}

void Rabbit::DisplayStatus() {
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

void Rabbit::DisplayLevel() {
    cout << name << "'s happiness level is " << happyLevel << endl;
    cout << name << "'s hunger level is " << hungerLevel << endl;
    cout << name << "'s boredom level is " << boredomLevel << endl;
}
