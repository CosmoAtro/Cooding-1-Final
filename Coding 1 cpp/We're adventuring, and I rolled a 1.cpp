// Alexis Painter Coding 1 
// Spring 2024 W5
// Loops and List

#include <iostream>
#include <string>
using namespace std;

int main() {
  std::cout << "Hello World!\n";
    // It's important to have our computers tells us what they're doing.

    // keep playing(yes/no?) do-while loop
    // random name generator
    //battle bot order (shuffles list) (with vector)

    // while (true) {
    //    cout << "My name is dan.\n";
    //}

    // do-while loops test at the end of the loop.
        
    string response = "";
    // cout << "Do you want to keep adventuring? (Yes/No)\n0";
    // cin >> response;
    // cout << "Do you want to keep adventuring? (yes/no)\n";
    // cin >> response;
    
    // while(response != "no") {
    //    cout << "Here we are adventure!!!\n Yay!!!\n";
    //    cin >> response;
    //    cout << "Do you want to keep adventuring (yes/no)\n";
    //    cin >> response;
    //    }

    //enter the do-while loop, which test at the end.

    do {
        cout << "Yay adventure!\n";
        cout << "Do you want to keep adventuring?\n";
        cin >> response;
   
    } while(response != "no");

    // do the test inside the loop.

    while (true) {
        string response;
        cout << "yay adventure!\n";
        cout << "Do you want to keep adventuring\n";
        cin >> response;

        if(response == "no") {
            cout <<  "Alright! Let's go home.\n";
            break;        // break out of the loop
        }
    }
     cout << "Here we are, safely outside of the last while loop.\n";

     // Let's build a list of names!

    //Build an array of strings named "names" with a size of 10.
    string names[10];
    names[0] = "Argus, the thief ";        // the number between [squarecbrackets.]
    names[1] = "Aries, the long range fighter";      // is called the index
    names[2] = "Bangor, the cleric";
    names[3] = "Horathgar, the barbarian";
    names[4] = "Kelvis, the paladin";
    names[5] = "Lord Sacren, the king";

    cout << "My favorite chararcter is " << names[1] << ".\n";
        
    // the loop os a great way to go through a list of things.
    // it has a built in counter named 'i' for "literstor"
    // you can name it whatever you want though.
    // this is what's happening in english.
    // for(initialization, test, action) {code block}

    // in code, by deflaut, this looks like:
    for(int i =0; i <10; i += 1) {
        if(names[i] == "") continue;    // go back to loop
        cout << names [i] << "\n";
    }
    cout << "And that's all the character in of array of names.\n";

    // create an array of favorite games.
    string favGames[10];
    int index =0;        // index points at the vurrent empty space.
    // create a while loop that ask the player what tey would like to do.
   while (true) {
    // the player can "add" a game, or "show" the games, or "quit"
       string input = ""; 
        cout << "What would you like to do?\n";
        cin >> input;

        if(input == "add") {
            if(index >= 10) {
                cout << "The list is full!\n";
            }
            else {
                // when adding, if size is MAX, don't let them add any more.    
                cout << "What name would you like to add?\n";
                cin >> input;
                favGames[index] = input;    //add one to index so that it's pointing at
                index +=1;                  // the next free space.
            }
        }
       else if(input == "show") {
       // when showing, ingore the blank space
      for(int i = 0; i < 10; i += 1) {
          if(favGames[i] == "") continue; //go back to top of loop
          cout << i + 1 << "." << favGames[i] << "\n";
      }
       }
       else if (input == "quit") {
          // when quitting, tell them thanks for playing.
           cout << "Thanks for playing!\n";
           break;    // out of the loop
       }
   }    // end of favGames loop.
        
}