#include "Pet.h"
#include <fstream>
using namespace std;

// Setters for pet's states
void Pet::setHappy(int Happiness) {
happyLevel = Happiness;
}
void Pet::setHunger(int Hungriness) {
hungerLevel = Hungriness;
}
void Pet::setBoredom(int Boredomness) {
boredomLevel = Boredomness;
}

void Pet::setName(string _name){
  name = _name;
}

// Getters for pet's states
int Pet::getHappy() {
return happyLevel;
}
int Pet::getHunger() {
return hungerLevel;
}

int Pet::getBoredom () {
  return boredomLevel;
}

string Pet::getName() {
return name;
}

void Pet::feedPet() {
  cout << "Its time to eat up!" << endl;
  happyLevel += 20;
  hungerLevel -= 40;
}

void Pet::play() {
  cout << "Its play time!" << endl;
  happyLevel += 30;
  hungerLevel += 15;
  boredomLevel -= 20;
}

void Pet::sleep() {
  cout << "Time to snuggle up and count some sheep, sleep tight my furry friend!" << endl;
  happyLevel += 50;
  hungerLevel += 10;
  boredomLevel -= 20;
}



void Pet::nextHour() {
   const int HUNGER_INCREASE_PER_HOUR = 10;
    const int BOREDOM_INCREASE_PER_HOUR = 5;
    const int HAPPINESS_DECREASE_PER_HOUR = 15;
    
    hungerLevel += HUNGER_INCREASE_PER_HOUR;
    boredomLevel += BOREDOM_INCREASE_PER_HOUR;
    happyLevel -= HAPPINESS_DECREASE_PER_HOUR;
}

void Pet::DisplayStatus() {
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

void Pet::DisplayLevel() {
    cout << name << "'s happiness level is " << happyLevel << endl;
    cout << name << "'s hunger level is " << hungerLevel << endl;
    cout << name << "'s boredom level is " << boredomLevel << endl;
}

void Pet::savePet(string fileName) {
  ofstream fout(fileName);
  fout << "Pet Name: " << name << "\n";
  fout << "Happy Level " << happyLevel << "\n";
  fout << "Hunger Level " << hungerLevel << "\n";
  fout << "Boredom Level " << boredomLevel << "\n";
  fout.close();
  cout << "Pet saved!" << endl;
}

void Pet::loadPet(string fileName) {
  ifstream fin(fileName);
  fin >> name >> happyLevel >> hungerLevel >> boredomLevel;
  fin.close();
  cout << "Pet loaded!" << endl;
}


