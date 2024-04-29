#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

void Showvector(vector<string> vec) {
  for(int i = 0; i < vec.size(); i++) {
    cout << vec[i] << ".\n";
  }
    }

    int CastDamage(int min, int max) {
        int damage = (rand() % (max-min)) + min;
        return damage;
    }


int main() {
  std::cout << "Hello, adveture! Welcome to the Crisome Dragon's guild hall! \n";
  std::cout << "Would you like to accept the bounty on the Orcs? \n";

  string response = "";

    do {
      cout<< "Yes! I'm ready to go on my adventure! \n";
      cin>> response;
    } while(response != "Yes");


    while(true) {
        string response;
         cout<< "Did you find the right bounty for your level? \n";
         cin>> response;

        if (response == "Yes") {
            cout<< "Yes! I'm ready to go on my adveture! \n";
            break;
        }
    }

    cout<< "Helm's blessing then! \n";

cout<< "Ambush! An orc appears before you he swings down with his crude axe. \n";
 

int CastDamage(int min, int max) {
    int damage = (rand() % (max-min)) + min;
    
    {
    string Orcfight() {
    cout<< "How much health do you have adventure? \n";
    int health;
    cin>> health
        health -= CastDamage(5, health);

    if (health > 0) {
        return "alive";
    }
    else {
        return "dead";

    }
}
        srand(time(0));
        string Orcfight;
    int playerstate;

    cout<< "The player is" <<playerstate<< "\n.";

        for(int i = 0; i < 10; i ++) {
            cout << "The enemy has done" << CastDamage(5, 10) << "damage! \n";
        }
    }
