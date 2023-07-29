#include <iostream>
#include<string>
#include <cstdlib>
#include<fstream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Rabbit.h"
using namespace std;


int main() {
  int choosePet;
  string petName;
  int loadFile;
  
  cout << "d8888b. d88888b d888888b d8888b.  .d8b.  db      d88888D \n";
  cout << "88  `8D 88'     `~~88~~' 88  `8D d8' `8b 88      YP  d8' \n";
  cout << "88oodD' 88ooooo    88    88oodD' 88ooo88 88         d8'  \n";
  cout << "88~~~   88~~~~~    88    88~~~   88~~~88 88        d8'   \n";
  cout << "88      88.        88    88      88   88 88booo.  d8' db \n";
  cout << "88      Y88888P    YP    88      YP   YP Y88888P d88888P \n";
             cout << "Welcome to PetPalz!\n";
              cout << "1) Load previous pet\n";
              cout << "2) Create a new pet\n";

  cin >> loadFile;

  if(loadFile == 1) {
    string data;
    cout << "Enter the file name\n";
    string fileName;
    cin >> fileName;
    ifstream fin(fileName);
    while(!fin.is_open()) {
      cout << "Sorry, the file name could not be found" << endl;
      cin >> fileName;
    }
    while(!fin.eof()){
      getline(fin,data);
      cout << data << endl;;
    }
    fin.close();
    }
  else {
    cout << endl;
    cout << "Please choose a pet" << endl;
    cout << "Pet 1 - Dog" << endl;
    cout << "  __      _\n";
    cout << "o'')}____//\n";
    cout << " `_/      )\n";
    cout << "  (_(_/-(_/\n";
    cout << endl;
    cout << "Pet 2 - Cat" << endl;
    cout << "/\\_/\\\n";
    cout << "( o.o )\n";
    cout << " > ^ <\n";
    cout << endl;
    cout << "Pet 3 - Rabbit" << endl;
    cout << " /\\ /|" << endl;
    cout << " \\ V/" << endl;
    cout << "  | \"\")" << endl;
    cout << "  /  |" << endl;
    cout << " /  \\\\" << endl;
    cout << "*(__\\_\\" << endl;

    cin >> choosePet;
    if (choosePet == 1) {
      cout << "You have chosen a dog WOOF WOOF!!" << endl;
      cout << "Please give your pet a name!" << endl;
      cin >> petName;
      Dog d;
      d.setHappy(50);
      d.setHunger(50);
      d.setBoredom(50);
      d.setName(petName);
      int i;

      
      do {
        cout << endl;
        cout << "Please choose an interaction" << endl;
       cout << "0 - Exit and save :(" << endl;
        cout << "1 - Play with " << d.getName() << endl;
        cout << "2 - Feed " << d.getName() << endl;
        cout << "3 - Sleep " << d.getName() << endl;
        cout << "4 - Fetch " << d.getName() << endl;
       cout << "5 - Swim " << d.getName() << endl;
        cout << "6 - Hike " << d.getName() << endl;
      d.DisplayStatus();
      cin >> i;
      cout << endl;

        if (i == 0) {
          break;
        }
        else if (i == 1) {
          d.play();
          d.nextHour();
          d.DisplayLevel();
          if ((d.getHappy() < 40) || (d.getHunger() > 100) || (d.getBoredom() > 100)) {
            break;
          }
        }
        else if (i == 2) {
          d.feedPet();
          d.nextHour();
          d.DisplayLevel();
          if ((d.getHappy() < 40) || (d.getHunger() > 100) || (d.getBoredom() > 100)) {
            break;
          }
        }
          else if (i == 3) {
          d.sleep();
          d.nextHour();
          d.DisplayLevel();
          if ((d.getHappy() < 40) || (d.getHunger() > 100) || (d.getBoredom() > 100)) {
            break;
          }
          }
          else if (i == 4) {
          d.fetch();
          d.nextHour();
          d.DisplayLevel();
          if ((d.getHappy() < 40) || (d.getHunger() > 100) || (d.getBoredom() > 100)) {
            break;
          }
          }
          else if (i == 5) {
          d.swim();
          d.nextHour();
          d.DisplayLevel();
          if ((d.getHappy() < 40) || (d.getHunger() > 100) || (d.getBoredom() > 100)) {
            break;
          }
        }
        else if (i == 6) {
          d.hike();
          d.nextHour();
          d.DisplayLevel();
          if ((d.getHappy() < 40) || (d.getHunger() > 100) || (d.getBoredom() > 100)) {
            break;
          }
        }
      }while (i != 0);
      if (i==0) {
        string fileName;
        cout << "Enter a name to save the file" << endl;
        cin >> fileName;
        d.savePet(fileName);
      }
      else {
        cout << "Sorry, your furry friend has crossed the rainbow bridge in the game." << endl;
        cout << "  __      _\n";
        cout << "o-x x)}____//\n";
        cout << " `_/      )\n";
        cout << "  (_(_/-(_/\n";
        cout << endl;

      }
    }
    if (choosePet == 2) {
      cout << "You have chosen a cat MEOWW Meoww!!" << endl;
      cout << "Please give your pet a name!" << endl;
      cin >> petName;

      Cat c;
      c.setHappy(50);
      c.setHunger(50);
      c.setBoredom(50);
      c.setName(petName);
      int i;

      
      do {
        cout << endl;
        cout << "Please choose an interaction" << endl;
        cout << "0 - Exit and save :(" << endl;
        cout << "1 - Play with " << c.getName() << endl;
        cout << "2 - Feed " << c.getName() << endl;
        cout << "3 - Sleep " << c.getName() << endl;
        cout << "4 - Jump " << c.getName() << endl;
        cout << "5 - Hunt " << c.getName() << endl;
        cout << "6 - Play with toy " << c.getName() << endl;
      c.DisplayStatus();
      cin >> i;
      cout << endl;

        if (i == 0) {
          break;
        }
        else if (i == 1) {
          c.play();
          c.nextHour();
          c.DisplayLevel();
          if ((c.getHappy() < 40) || (c.getHunger() > 100) || (c.getBoredom() > 100)) {
            break;
          }
        }
        else if (i == 2) {
          c.feedPet();
          c.nextHour();
          c.DisplayLevel();
          if ((c.getHappy() < 40) || (c.getHunger() > 100) || (c.getBoredom() > 100)) {
            break;
          }
        }
        else if (i == 3) {
          c.sleep();
          c.nextHour();
          c.DisplayLevel();
          if ((c.getHappy() < 40) || (c.getHunger() > 100) || (c.getBoredom() > 100)) {
            break;
          }
        }
        else if (i == 4) {
          c.jump();
          c.nextHour();
          c.DisplayLevel();
          if ((c.getHappy() < 40) || (c.getHunger() > 100) || (c.getBoredom() > 100)) {
            break;
          }
        }
        else if (i == 5) {
          c.hunt();
          c.nextHour();
          c.DisplayLevel();
          if ((c.getHappy() < 40) || (c.getHunger() > 100) || (c.getBoredom() > 100)) {
            break;
          }
        }
        else if (i == 6) {
          c.playWithToy();
          c.nextHour();
          c.DisplayLevel();
          if ((c.getHappy() < 40) || (c.getHunger() > 100) || (c.getBoredom() > 100)) {
            break;
          }
        }
      }while (i != 0);
      if (i==0) {
        string fileName;
        cout << "Enter a name to save the file" << endl;
        cin >> fileName;
        c.savePet(fileName);
        }
      else {
        cout << "Sorry, your furry friend has crossed the rainbow bridge in the game." << endl;
        cout << "/\\_/\\\n";
        cout << "( x.x )\n";
        cout << " > ^ <\n";
        cout << endl;
      }
    }

    if (choosePet == 3) {
    cout << "You have chosen a rabbit HOP HOP!!" << endl;
    cout << "Please give your pet a name!" << endl;
    cin >> petName;

    Rabbit r;
    r.setHappy(50);
    r.setHunger(50);
    r.setBoredom(50);
    r.setName(petName);
    int i;

    do {
        cout << endl;
        cout << "Please choose an interaction" << endl;
        cout << "0 - Exit and save :(" << endl;
        cout << "1 - Play with " << r.getName() << endl;
        cout << "2 - Feed " << r.getName() << endl;
        cout << "3 - Sleep " << r.getName() << endl;
        cout << "4 - Hop " << r.getName() << endl;
       cout << "5 - Dig " << r.getName() << endl;
      cout << "6 - Chew " << r.getName() << endl;
        r.DisplayStatus();
        cin >> i;
        cout << endl;

        if (i == 0) {
            break;
        } 
        else if (i == 1) {
            r.play();
            r.nextHour();
            r.DisplayLevel();
            if ((r.getHappy() < 40) || (r.getHunger() > 100) || (r.getBoredom() > 100)) {
                break;
            }
        }
        else if (i == 2) {
      r.play();
      r.nextHour();
      r.DisplayLevel();
      if ((r.getHappy() < 40) || (r.getHunger() > 100) || (r.getBoredom() > 100)) {
        break;
      }
    }
    else if (i == 3) {
      r.sleep();
      r.nextHour();
      r.DisplayLevel();
      if ((r.getHappy() < 40) || (r.getHunger() > 100) || (r.getBoredom() > 100)) {
        break;
      }
    }
    else if (i == 4) {
      r.hop();
      r.nextHour();
      r.DisplayLevel();
      if ((r.getHappy() < 40) || (r.getHunger() > 100) || (r.getBoredom() > 100)) {
        break;
      }
    }
    else if (i == 5) {
      r.dig();
      r.nextHour();
      r.DisplayLevel();
      if ((r.getHappy() < 40) || (r.getHunger() > 100) || (r.getBoredom() > 100)) {
        break;
      }
        }
      else if (i == 6) {
      r.chew();
      r.nextHour();
      r.DisplayLevel();
      if ((r.getHappy() < 40) || (r.getHunger() > 100) || (r.getBoredom() > 100)) {
        break;
      }
      }
    } while (i != 0);

    if (i==0) {
        string fileName;
        cout << "Enter a name to save the file" << endl;
        cin >> fileName;
        r.savePet(fileName);
    } else {
    cout << "Sorry, your furry friend has crossed the rainbow bridge in the game." << endl;
    cout << " /\\ /|" << endl;
    cout << " \\ V/" << endl;
    cout << "  | x x)" << endl;
    cout << "  /  |" << endl;
    cout << " /  \\\\" << endl;
    cout << "*(__\\_\\" << endl;
    }
    }
  }
}