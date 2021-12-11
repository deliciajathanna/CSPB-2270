#include "Zoo.h"
#include <iostream>
using namespace std;

Zoo::Zoo() {
}

Zoo::~Zoo() {
}

void Zoo::EnterAnimalType(int type) {
    if (type == 1) {
        // this will help end the while loop
        bool loop;
        string answer;
        string name;
        int age;
        cout << "Enter the name and age of the Lion:  " << endl;
        cin >> name;
        cin >> age;
        InsertLion(name, age);
        // while loop to ensure user is entering the corrent number of lions
        while (loop){
            cout << "Do you want to enter another Lion?" << endl;
            cin >> answer;
            if (answer == "Y") {
            cout << "Enter the name and age of the Lion:  " << endl;
            cin >> name;
            cin >> age;
            InsertLion(name, age);
            }
            // if no the loop ends
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
}
void Zoo::InsertLion(string name, int age){
    // insert the lion(s) into the lion linked list
    shared_ptr<Animal> lion(new Animal);
    lion->name = name;
    lion->age = age;
    lion->next = NULL;
    if(head == NULL) {
        head = lion;
        tail = lion;
    }
    else{
        tail->next = lion;
        tail = tail->next;
        }
}
