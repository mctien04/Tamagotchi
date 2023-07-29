#include "Dog.h"
#include <iostream>
using namespace std;
void Dog::fetch()
{
  happyLevel += 15;
  hungerLevel += 15;
  boredomLevel -= 20;

  cout << "That's it, fetcherino!!!";
  cout << endl;
  cout << "  __      _\n";
  cout << "o'')}____//\n";
  cout << " `_/      )\n";
  cout << "  (_(_/-(_/\n";
}

void Dog::swim() {
  happyLevel += 20;
  hungerLevel += 25;
  boredomLevel -= 25;

  cout << "Get your paws wet, doggo!";
  cout << endl;
  cout << "  __      _\n";
  cout << "o'')}____//\n";
  cout << " `_/      )\n";
  cout << "  (_(_/-(_/\n";
}

void Dog::hike() {
happyLevel += 25;
hungerLevel += 30;
boredomLevel -= 30;
cout << "Let's go for a hike, doggo!";
cout << endl;
  cout << "  __      _\n";
  cout << "o'')}____//\n";
  cout << " `_/      )\n";
  cout << "  (_(_/-(_/\n";
}

void Dog::DisplayStatus() {
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

void Dog::DisplayLevel() {
    cout << name << "'s happiness level is " << happyLevel << endl;
    cout << name << "'s hunger level is " << hungerLevel << endl;
    cout << name << "'s boredom level is " << boredomLevel << endl;
}
