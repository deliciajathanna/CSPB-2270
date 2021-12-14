#include "FinalProject.h"
#include <iostream>
#include <string>
using namespace std;

Zoo::Zoo() {
}

Zoo::~Zoo() {
}

void Zoo::EnterAnimalType(int type) {
    string answer;
    string name;
    int age;
    bool loop = true;
    if (type == 1) {
        cout << "Enter the name of the Lion:  " << endl;
        cin >> name;
        cout << "Enter the age of the Lion: " << endl;
        cin >> age;
        InsertAnimal(name, age);
        while (loop){
            cout << "Do you want to enter another Lion? Enter Y or N: " << endl;
            cin >> answer;
            if (answer == "Y") {
                cout << "Enter the name of the Lion:  " << endl;
                cin >> name;
                cout << "Enter the age of the Lion: " << endl;
                cin >> age;
                InsertAnimal(name, age);
            }
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
    if (type == 2) {
        cout << "Enter the name of the Tiger:  " << endl;
        cin >> name;
        cout << "Enter the age of the Tiger: " << endl;
        cin >> age;
        InsertAnimal(name, age);
        while (loop){
            cout << "Do you want to enter another Tiger? Enter Y or N: " << endl;
            cin >> answer;
            if (answer == "Y") {
                cout << "Enter the name of the Tiger:  " << endl;
                cin >> name;
                cout << "Enter the age of the Tiger: " << endl;
                cin >> age;
                InsertAnimal(name, age);
            }
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
    if (type == 3) {
        cout << "Enter the name of the Bear:  " << endl;
        cin >> name;
        cout << "Enter the age of the Bear: " << endl;
        cin >> age;
        InsertAnimal(name, age);
        while (loop){
            cout << "Do you want to enter another Bear? Enter Y or N: " << endl;
            cin >> answer;
            if (answer == "Y") {
                cout << "Enter the name of the Bear:  " << endl;
                cin >> name;
                cout << "Enter the age of the Bear: " << endl;
                cin >> age;
                InsertAnimal(name, age);
            }
            else if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
    if (type == 4) {
        cout << "Enter the name of the Bird:  " << endl;
        cin >> name;
        cout << "Enter the age of the Bird: " << endl;
        cin >> age;
        InsertAnimal(name, age);
        while (loop){
            cout << "Do you want to enter another Bird? Enter Y or N: " << endl;
            cin >> answer;
            if (answer == "Y") {
                cout << "Enter the name of the Bird:  " << endl;
                cin >> name;
                cout << "Enter the age of the Bird: " << endl;
                cin >> age;
                InsertAnimal(name, age);
            }
            else if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
    if (type == 5) {
        cout << "Enter the name of the Elephant:  " << endl;
        cin >> name;
        cout << "Enter the age of the Elephant" << endl;
        cin >> age;
        InsertAnimal(name, age); 
        while (loop) {
            cout << "Do you want to enter another Elephant? Enter Y or N: " << endl;
            cin >> answer;
            if (answer == "Y") {
                cout << "Enter the name of the Elephant: " << endl;
                cin >> name;
                cout << "Enter the age of the Elephant: " << endl;
                cin >> age;
                InsertAnimal(name, age);
            }
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
}

void Zoo::InsertAnimal(string name, int age){
    shared_ptr<Animal> list(new Animal);
    list->name = name;
    list->age = age;
    list->next = NULL;
    if(head == NULL) {
        head = list;
        tail = list;
    }
    else {
        tail->next = list;
        tail = tail->next;
    }
}
  

void Zoo::RemoveAnimal(string name) {
    shared_ptr<Animal> head = GetTop();
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    while(head != NULL) {
        if (head->name == name) {
            head->name = head->next->name;
            head->age = head->next->age;

            cout << name << " was deleted from the list." << endl;
            return;
        }
        else {
            head = head->next;
        }
    }
}
    
    
    

shared_ptr<Animal> Zoo::GetTop(){
  return head;
}

void Zoo::DisplayAnimal(shared_ptr<Animal> head) {
   if(head != NULL) {
       cout << head->name << "     " << head->age<< endl;   
       DisplayAnimal(head->next);
   }
}
