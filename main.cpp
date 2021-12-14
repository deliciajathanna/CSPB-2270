#include "../code/FinalProject.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
  bool MenuLoop = true;
  string name;
  int choice;
  Zoo lion;
  Zoo tiger;
  Zoo bear;
  Zoo bird;
  Zoo elephant;
  while (MenuLoop) {
    cout << "Welcome to the Zoo database, please chose an option from the following menu: " << endl;
    cout << "1) Add Animal" << endl;
    cout << "2) Delete Animal" << endl;
    cout << "3) Print List" << endl;
    cout << "Enter 4 to exit the program." << endl;
    cin >> choice;
    if (choice == 1 || choice == 2 || choice == 3) {
      if (choice == 1) {
        int type;
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
          tiger.EnterAnimalType(type);
        }
        else if (type == 3) {
          bear.EnterAnimalType(type);
        }
        else if (type == 4) {
          bird.EnterAnimalType(type);
        }
        else if (type == 5) {
          elephant.EnterAnimalType(type);
        }
        else if (type == 6) {
          cout << "Taking you back to the main menu." << endl;
        }
        while (type < 1 || type > 6) {
          cout << "Error! Please chose one of the options from the menu: " << endl;
        }
      }
      else if (choice == 2) {
        int del_type;
        cout << "Choose the type of animal you want to add: " << endl;
        cout << "1) Lion" << endl;
        cout << "2) Tiger" << endl;
        cout << "3) Bear" << endl;
        cout << "4) Bird" << endl;
        cout << "5) Elephant" << endl;
        cout << "6) Return to main menu" << endl;
        cin >> del_type;
        string name;
        if (del_type == 1) {
          cout << "Enter the name of the lion you want to delete: " << endl;
          cin >> name;
          lion.RemoveAnimal(name);
        }
        else if (del_type == 2) {
          cout << "Enter the name of the tiger you want to delete: " << endl;
          cin >> name;
          tiger.RemoveAnimal(name);
        }
        else if (del_type == 3) {
          cout << "Enter the name of the bear you want to delete: " << endl;
          cin >> name;
          bear.RemoveAnimal(name);
        }
        else if (del_type == 4) {
          cout << "Enter the name of the bird you want to delete: " << endl;
          cin >> name;
          bird.RemoveAnimal(name);
        }
        else if (del_type == 5) {
          cout << "Enter the name of the elepahnt you want to delete: " << endl;
          cin >> name;
          elephant.RemoveAnimal(name);
        }
        else if (del_type == 6) {
          cout << "Taking you back to the main menu." << endl;

        }
        while (del_type < 1 || del_type > 6) {
            cout << "Error! Please chose one of the options from the menu: " << endl;
            cin >> del_type; 
        }
      }
      else if (choice == 3) {
        int print_type;
        cout << "Choose the type of animal you want to print: " << endl;
        cout << "1) Lion" << endl;
        cout << "2) Tiger" << endl;
        cout << "3) Bear" << endl;
        cout << "4) Bird" << endl;
        cout << "5) Elephant" << endl;
        cout << "6) Display All" << endl;
        cout << "7) Return to main menu" << endl;
        cin >> print_type;
        if (print_type == 1) {
          cout << "Name: " << "     " << "Age: " << endl;
          lion.DisplayAnimal(lion.GetTop());
          }
        else if (print_type == 2) {
          cout << "Name: " << "     " << "Age: " << endl;
          tiger.DisplayAnimal(tiger.GetTop());
        }
        else if (print_type == 3) {
          cout << "Name: " << "     " << "Age: " << endl;
          bear.DisplayAnimal(bear.GetTop());
        }
        else if (print_type == 4) {
          cout << "Name: " << "     " << "Age: " << endl;
          bird.DisplayAnimal(bird.GetTop());
        }
        else if (print_type == 5) {
          cout << "Name: " << "     " << "Age: " << endl;
          elephant.DisplayAnimal(elephant.GetTop());
        }
        else if (print_type == 6) {
          cout << "Lions: " << endl;
          cout << "Name: " << "   " << "Age: " << endl;
          lion.DisplayAnimal(lion.GetTop());
          cout << "Tigers: " << endl;
          cout << "Name: " << "     " << "Age: " << endl;
          tiger.DisplayAnimal(tiger.GetTop());
          cout << "Bears: " << endl;
          cout << "Name: " << "     " << "Age: " << endl;
          bear.DisplayAnimal(bear.GetTop());
          cout << "Birds: " << endl;
          cout << "Name: " << "     " << "Age: " << endl;
          bird.DisplayAnimal(bird.GetTop());
          cout << "Elephants: " << endl;
          cout << "Name: " << "     " << "Age: " << endl;
          elephant.DisplayAnimal(elephant.GetTop());
        }
        else if (print_type == 7) {
          cout << "Taking you back to the main menu." << endl;
        }
        while (print_type < 1 || print_type > 6) {
            cout << "Error! Please chose one of the options from the menu: " << endl;
        }
      }
    }
    else if (choice == 4) {
        cout << "Goodbye" <<endl;
        MenuLoop = false;
    }
    else{
      cout << "Error! Please chose of the options from the menu: " << endl;
    }
  }
  return 0;
}
