#include "Zoo.h"
#include <iostream>
using namespace std;

int main(){
    bool MenuLoop = true;
    bool AddLoop = true;
    bool DelLoop = true;
    int choice;
    while (choice != 4) {
      cout << "Welcome to the Zoo database, please chose an option from the following menu: " << endl;
      cout << "1) Add Animal" << endl;
      cout << "2) Delete Animal" << endl;
      cout << "3) Print List" << endl;
      cout << "Enter 4 to exit the program." << endl;
      cin >> choice;
      if (choice == 1) {
        int type;
        while (AddLoop) {
          cout << "Choose the type of animal you want to add: " << endl;
          cout << "1) Lion" << endl;
          cout << "2) Tiger" << endl;
          cout << "3) Bear" << endl;
          cout << "4) Bird" << endl;
          cout << "5) Elephant" << endl;
          cout << "6) Return to main menu" << endl;
          cin >> type;
          if (type == 1) {
            lion.EnterAnimalType(type);
          }
          else if (type == 2) {
          }
          else if (type == 3) {
          }
          else if (type == 4) {
          }
          else if (type == 5) {
          }
          else if (type == 6) {
            AddLoop = false;
          }
          else if (type <= 1 || type >= 6) {
              cout << "Error! Please chose one of the options from the menu: " << endl;
          }
        }
      }
      else if (choice == 2) {
        int del_type;
        cout << "Choose the type of animal you want to delete: " << endl;
        cout << "1) Lion" << endl;
        cout << "2) Tiger" << endl;
        cout << "3) Bear" << endl;
        cout << "4) Bird" << endl;
        cout << "5) Elephant" << endl;
        cout << "6) Return to main menu" << endl;
        cin >> del_type;
        while (DelLoop) {
          cout << "Choose the type of animal you want to delete: " << endl;
          cout << "1) Lion" << endl;
          cout << "2) Tiger" << endl;
          cout << "3) Bear" << endl;
          cout << "4) Bird" << endl;
          cout << "5) Elephant" << endl;
          cout << "6) Return to main menu" << endl;
          cin >> del_type;
          if (del_type == 1) {
          }
          else if (del_type == 2) {
          }
          else if (del_type == 3) {
          }
          else if (del_type == 4) {
          }
          else if (del_type == 5) {
          }
          else if (del_type == 6) {
              DelLoop = false;
          }
          else if (del_type <= 1 || del_type >= 6) {
              cout << "Error! Please chose one of the options from the menu: " << endl;
          }
        }
      }
      else if (choice == 3) {
        
      }
      else if (choice == 4) {
          cout << "Goodbye" <<endl;
          MenuLoop = false;
      }
    }
    return 0;
}
