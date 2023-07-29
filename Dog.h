#ifndef Dog_h
#define Dog_h
#include "Pet.h"
#include <iostream>
#include <string>
class Dog: public Pet {

  public:
  void fetch();
  void swim();
  void hike();

  void DisplayLevel();
  void DisplayStatus();
};


#endif