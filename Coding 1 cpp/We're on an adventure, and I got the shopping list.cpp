#include <iostream>    // for cout and cin
#include <string>
#include <ctime>    // for time
#include <cstdlib>    //for and() and srand()
#include <vector>    // for vectors
#include <algorithm>    // for sort, random_shuffle, and find
using namespace std;


int main() {
  srand(time(0));

    cout << "Here is your random number: " << rand() % 2000 << ".\n";

    cout << "What program would you like to run?\n";
    cout << "Press 1 for vector exploration.\n";
    cout << "Press 2 for iterator nonsense. \n";
    cout << "Press 3 for algorithm. \n";    // #include <algorithm>
    int numInput =-1;
    cin >> numInput;

    if(numInput == 1) 
    {
        //our first set of code is here
        cout << "Let's talk about vectors!\n";
        // #include <vector>
        // build a vector of strings named inventory with a size of zero.
        vector<string> inventory;

        cout << "There are" << inventory.size() << " items in my bag.\n";

        // let's add some things to our inventory!

        inventory.push_back( "Sword");
        inventory.push_back( "Shield");
        inventory.push_back( "Axe");

        cout << "There are " <<inventory.size() << " items in my bag.\n";

        cout << "The first item in my inventory is a " << inventory[0] <<".\n";

        cout<< "Items:\n";
        // can you use a for loop to display all of your items? (use .size())
        for(int i = 0; i < inventory.size(); i++) {
            cout << inventory[i] << "\n";
        }

        // let's replace an item, then let's remove an item with pop_back().

        cout << "We don't need a shield, let's get a gun.\n";
        inventory[1] = "gun";

        cout << "also, our axe breaks!!\n";

        inventory.pop_back();        // this removes the last item from the list.
      
        cout << "Items:\n";
        // can you use a loop to display all of your items? (use .size())
        for(int i = 0; i < inventory.size(); i++) {
            cout << inventory[i] << "\n";
        }


        
    }// end of program 1 
    else if (numInput ==2)
    {
        cout << "Let's talk about iterators!\n";
        // iterators point at a spot in the list (vector).
        
        //let's create a vetors of strings names shoppingList
        // let's use a collection initializer to quickly add 5 items...  
        vector<string> shoppingList {"Arrows","HealthPot", "Rations", "Water", "Whetstone"};
    
        // let's create a variable of the type vector<string>:: iterators named iters
        vector<string>::iterator iter = shoppingList.begin(); 
        
        //using an asterisk * to dereference our iterator to get the value
        cout<< "Here's the first item in the shopping list: " << *iter << ".\n";
        
        cout<< "Here's our shopping list:\n";
        for(vector<string>::const_iterator iter = shoppingList.begin(); iter != shoppingList.end(); ++iter) {
                cout << *iter << "\n";
    }
   
    /*
        Arrows        <--.begin()
        HealthPot
        Rations
        Water
        Whetstone
                    <--.end()
    */
   
    cout << "Here is the last item:" << *(shoppingList.cend() - 1) << ".\n";
        
    } // end of program 2
    else if(numInput ==3) {
        // let's create a vector of random scores.
        vector<int> scores;

        cout << "Adding scores\n";
        for(int i = 0; i< 10; i++) {
            scores.push_back(rand() % 100 + 1);
        }

        cout << "Here are the scores:\n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << "\n";
        }

        // now we'll sort them!
        sort (scores.begin(), scores.end());

        cout << "Sort lowest to highest:\n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << "\n";
    }
        //reverse, so highest number is first!
        reverse(scores.begin(), scores.end());
        
        cout << "Sort lowest to highest:\n";
        for(int i = 0; i < scores.size(); i++) {
            cout << scores[i] << "\n";
        }
        //now shuffle them again!
        random_shuffle(scores.begin(), scores.end());

        cout << "shuffled:\n;";
        for(int i = 0; i < scores.size(); i++) {
                cout << scores[i] << "\n";
        }
     
    } // end of program 3
        else
    {
        cout << numInput << " wasn't one of the options.\n";
     } // end of the program catch-all else statement

     return 0;

}