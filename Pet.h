#ifndef Pet_h
#define Pet_h
#include <iostream>
#include <string>


class Pet {
protected:
std:: string name;
int happyLevel;
int hungerLevel;
int boredomLevel;

public:
void setHappy(int Happiness);
void setHunger (int Hungriness);
void setBoredom( int Boredomness);
void setName(std::string _name);

int getHappy();
int getHunger();
int getBoredom();
std::string getName();

void feedPet();
void play();
void sleep();
void nextHour();
virtual void DisplayLevel() = 0;
virtual void DisplayStatus() = 0;

void savePet(std::string fileName);
void loadPet(std::string fileName);

};

#endif