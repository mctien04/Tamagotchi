#ifndef Cat_H
#define Cat_H

#include "Pet.h"
#include <iostream>
#include <string>

class Cat : public Pet {
  public:
    void jump();
    void hunt();
    void playWithToy();
    void DisplayLevel();
    void DisplayStatus();
};

#endif
