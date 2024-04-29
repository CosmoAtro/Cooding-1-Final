#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

// for debugging, change this before shipping.
bool debug = false;

string askYesNo(string question) {
    string response;
    cout << question << " (yes/no): ";
    cin >> response;
    return response;
}

int RollDie(int sides =  20) {
    return rand() % sides + 1;
}
enum itemType {
    weapon, consumable
};

enum elementalType {
basic = 0, fire = 1, posion = 2
};
class item {
public:
  itemType type = weapon;
  int damage = 0;
  string name = "";
  elementalType element = basic;
  int remainingUses = 0;
  int healingAmount = 0;

  string response;

  item(string n = "item",itemType t = weapon) {
      if(debug) cout << "Starting item constructor.\n";
    name = n;        // assign the name of the item to the given name.
    type = t;
  }

  void Inspect() {
      if(debug) cout << "Calling item.Inspect on item: " << name << ".\n";
    cout << name << " ouch! this has damage of " << damage << ", and it's element is " << elementToString(element) << "\n";
    cout << "It can be used " << remainingUses << " more times, heals for " << healingAmount << ",\n";
    cout << "And is of the item type " << typeToString(type) << ".\n\n";
  }

  string typeToString(itemType type) {

    switch(type) {
        case weapon:
            return "weapon";
            break;
        case consumable:
            return "consumable";
            break;
        default:
            return "unknown";
            break;
    }
  }

  string elementToString(elementalType element) {
        switch(element) {
            case basic: return "basic"; break;
            case fire: return "fire"; break;
            case posion: return "posion"; break;
            default: return "unknown";
        }
  }
int damageDealt = rand() % damage + (damage/2);
int getDamage() {
    return damage;
}
    };


class enemy {
  public:
    item heldItem;
int health = 10;
int getDamage() {
    return heldItem.damage;
}
   enemy(item givenItem = item("", weapon)) {
      if (debug) cout << "Calling enemy constructor.\n";
      heldItem = givenItem;
    }

    int attack() {
      if (debug) cout << "Calling attack().\n";
      return heldItem.getDamage();
    }
};


int main() {
    if(debug) cout << "1\n";
    
    cout << "Hello Adventure! Welcome back to the Tired Toad Tavern! I see that your Orc hunting didn't quite pan out. \n";
    cout << "Here, I saved this bounty just for you, try clearing out a goblin nest instead. \n";

    srand(time(0));

    vector<string> weaponNames ={
    "Old Dagger",
    "Spider-Infested short sword",
    "Frank's Hot Sauce dipped kitchen knife",
    };
    random_shuffle(weaponNames.begin(), weaponNames.end());  
    item dagger("Old Dagger", weapon);
    dagger.Inspect();
        
    vector<item> weapons;

    for(int i = 0; i < weaponNames.size(); i++) {
        weapons.push_back(item(weaponNames[i], weapon));    
        weapons[i].Inspect();     
    }
    enemy goblin(weapons[0]);
    
    int playerHealth = 20;
    
    if(debug) cout << "4\n";
    
    do {
        string response = askYesNo("Do you accept this bounty?");
        if (response == "yes") {
        
            int goblinAttack = RollDie (10);
            int playerAttack = RollDie (10);
            
            if(debug) cout << "2\n";
            
            cout<< "You've been spotted by a scout goblin! \n";
            cout<< "You and the goblin attack each other! \n";
            
            if(playerAttack >= goblinAttack) {
                cout << "It squeals in pain, fleeing into the wild. But not without leaving a trail...\n";
                cout << "The wound that it inlfected upon you stings. \n"; 
                response = askYesNo ("Do you take a minor health potion? \n");
                
                if(response == "yes") {
                    // Use the consumable to heal the player
                    playerHealth += 5;
                    cout << "You have been healed to " << playerHealth << " health.\n";
                }
            }
            else {
                cout << "It smiles gleefully at you as it strikes you down. \n";
                cout << "As it goes for another swing it stops, and tilts its head as if hearing something you cannot... \n";
                cout << "It snarls at you before fleeing into the undergrowth. \n";
                cout << "Lady Tymora smiles upon you, the goblin didn't finish it's kill.\n";
                
                response= askYesNo ("Do you want to heal up? \n");
                if(response == "yes") {
                    // Use the consumable to heal the player
                    playerHealth += 5;
                    cout << "You have been healed to " << playerHealth << " health.\n";
                    cout << "The forest becomes eerie quite, a preator is on the prowl. Turns out you weren't quite so lucky after all... \n";
                    
                    if(debug) cout << "3\n";
                }
            }
        }
    } while(true);
}