#ifndef Rabbit_H
#define Rabbit_H

#include "Pet.h"
#include <iostream>
#include <string>

class Rabbit : public Pet {
public:
  void hop();
  void dig();
  void chew();
  void DisplayLevel();
  void DisplayStatus();
};

#endif
