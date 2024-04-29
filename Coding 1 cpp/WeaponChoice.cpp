//let's talk about

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

// am enumberator is a custum varible that evaluates to an integer.
enum itemType {
//equal to 0, 1, and 2, respectively.
    weapon, tool, consumable
};

enum elementalType {
// 0,1, 2, 3, 4
   basic = 0, fire = 1, ice = 2, candy = 3, slime = 4
};

// create a class named enemy based on the Adventure assignment over spring break
class enemy {

};
class item {
public:
    itemType type = weapon;
    int damage = 0;
    string name = "";
    elementalType element = basic;
    int remainingUses = 0;
    int healingAmount = 0;

// build a fancy constructor
    item (string n, itemType t) {
      name = n;    //assign the name of the item to the given name.
      type = t;

      if(type == weapon) {
          // calculate damage and element
          damage = rand() % 5 + 3;
          element = (elementalType)(rand() % 4);    // typecast an int into an elementalType
          remainingUses = 9999;
          healingAmount = 0;
      }
        else if(type == tool) {
            damage = 1;
                element = basic;
            remainingUses = rand() % 5 + 1;
            healingAmount = 0;
        }
        else if(type == consumable) {
            healingAmount = rand() % 5 + 1;
            damage = -healingAmount;
            element = basic;
            remainingUses = 1;
        }
    }// end of item constructor

    void Inspect() {
        cout << name << "has damage of " << damage << ", it's element is " << element << "\n";
        cout << "It can be used " << remainingUses << " more times, heals for " << healingAmount << ",\n";
        cout << "And is of the item type " << typeToString(type) << ".\n\n";
    }

    string typeToString(itemType type) {
        switch(type) {
            case weapon: 
                return "weapon";
                        break;
            case tool: 
                return "tool";
                        break;
            case consumable: 
                return "consumable";
                        break;
            default: 
                return "unknown";
                        break;
            
        }
    }
};

string elementToString(elementalType element) {
    switch(element) {
        case basic: 
            return "basic";
                    break;
        case fire: 
            return "tool";
                    break;
        case ice: 
            return "consumable";
                    break;
        case candy:
            return "fire";
                    break;
        case slime:
            return "slime";
                    break;
            default: 
            return "unknown";
                    break;
    }
}

int main() {
  cout << "More classes!\n";

// a vector of weapon names
    vector<string> weaponNames = {
        "Excalibur",
        "Banshee's Bane",
        "Sting",
        "Infliction",
        "New Death",
        "Deathbringer",
        "Soul Edge",
        "Doombringer",
        "Frostmourne",
        "Dragonslayer"
    };

      random_shuffle(weaponNames.begin(), weaponNames.end());   // #include <algorithm>
    
 item sting("Inflication", weapon);
    sting.Inspect();

    vector<item> weapons;

    for(int i = 0; i < weaponNames.size(); i++) {
        weapons.push_back(item(weaponNames[i], weapon));    // create a weapon.
        weapons[i].Inspect();        // display the newly created weapon.







}
}

