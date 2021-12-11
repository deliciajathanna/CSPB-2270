#include "Zoo.h"
#include <iostream>
using namespace std;

int main(){
    bool MenuLoop = true;
    int choice;
    while (MenuLoop) {
      cout << "Welcome to the Zoo database, please chose an option from the following menu: " << endl;
      cout << "1) Add Animal" << endl;
      cout << "2) Delete Animal" << endl;
      cout << "3) Print List" << endl;
      cout << "Enter 4 to exit the program." << endl;
      cin >> choice;
      if (choice == 1) {
        int type;
        cout << "Choose the type of animal you want to add: " << endl;
        cout << "1) Lion" << endl;
        cout << "2) Tiger" << endl;
        cout << "3) Bear" << endl;
        cout << "4) Bird" << endl;
        cout << "5) Elephant" << endl;
        cin >> type;
        EnterAnimalType(type);
      }
    }
    return 0;
}
