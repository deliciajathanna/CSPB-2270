#include "Zoo.h"
#include <iostream>
#include <string>
using namespace std;

Zoo::Zoo() {
}

Zoo::~Zoo() {
}

void Zoo::EnterAnimalType(int type) {
    if (type == 1) {
        bool loop;
        string answer;
        string name;
        int age;
        cout << "Enter the name and age of the Lion:  " << endl;
        cin >> name;
        cin >> age;
        InsertLion(name, age);
        while (loop){
            cout << "Do you want to enter another Lion?" << endl;
            cin >> answer;
            if (answer == "Y") {
            cout << "Enter the name and age of the Lion:  " << endl;
            cin >> name;
            cin >> age;
            InsertLion(name, age);
            }
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
    if (type == 2) {
        bool loop;
        string answer;
        string name;
        int age;
        cout << "Enter the name and age of the Tiger:  " << endl;
        cin >> name;
        cin >> age;
        InsertTiger(name, age);
        while (loop){
            cout << "Do you want to enter another Tiger?" << endl;
            cin >> answer;
            if (answer == "Y") {
            cout << "Enter the name and age of the Tiger:  " << endl;
            cin >> name;
            cin >> age;
            InsertTiger(name, age);
            }
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
    if (type == 3) {
        bool loop;
        string answer;
        string name;
        int age;
        cout << "Enter the name and age of the Bear:  " << endl;
        cin >> name;
        cin >> age;
        InsertBear(name, age);
        while (loop){
            cout << "Do you want to enter another Bear?" << endl;
            cin >> answer;
            if (answer == "Y") {
            cout << "Enter the name and age of the Bear:  " << endl;
            cin >> name;
            cin >> age;
            InsertBear(name, age);
            }
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
    if (type == 4) {
        bool loop;
        string answer;
        string name;
        int age;
        cout << "Enter the name and age of the Bird:  " << endl;
        cin >> name;
        cin >> age;
        InsertBird(name, age);
        while (loop){
            cout << "Do you want to enter another Bird?" << endl;
            cin >> answer;
            if (answer == "Y") {
            cout << "Enter the name and age of the Bird:  " << endl;
            cin >> name;
            cin >> age;
            InsertBird(name, age);
            }
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
    if (type == 5) {
        bool loop;
        string answer;
        string name;
        int age;
        cout << "Enter the name and age of the Elephant:  " << endl;
        cin >> name;
        cin >> age;
        InsertElephant(name, age);
        while (loop){
            cout << "Do you want to enter another Elephant?" << endl;
            cin >> answer;
            if (answer == "Y") {
            cout << "Enter the name and age of the Elephant:  " << endl;
            cin >> name;
            cin >> age;
            InsertElephant(name, age);
            }
            if (answer == "N") {
                cout << "Taking you back to the main menu"<< endl;
                loop = false;
            }
        }
    }
}

void Zoo::InsertLion(string name, int age){
    shared_ptr<Animal> lion(new Animal);
    lion->name = name;
    lion->age = age;
    lion->next = NULL;
    if(lionhead == NULL) {
        lionhead = lion;
        liontail = lion;
    }
    else{
        liontail->next = lion;
        liontail = liontail->next;
        }
}

void Zoo::InsertTiger(string name, int age){
    shared_ptr<Animal> tiger(new Animal);
    tiger->name = name;
    tiger->age = age;
    tiger->next = NULL;
    if(tigerhead == NULL) {
        tigerhead = tiger;
        tigertail = tiger;
    }
    else{
        tigertail->next = tiger;
        tigertail = tigertail->next;
    }
}

void Zoo::InsertBear(string name, int age){
    shared_ptr<Animal> bear(new Animal);
    bear->name = name;
    bear->age = age;
    bear->next = NULL;
    if(bearhead == NULL) {
        bearhead = bear;
        beartail = bear;
    }
    else{
        beartail->next = bear;
        beartail = beartail->next;
    }
}

void Zoo::InsertBird(string name, int age){
    shared_ptr<Animal> bird(new Animal);
    bird->name = name;
    bird->age = age;
    bird->next = NULL;
    if(birdhead == NULL) {
        birdhead = bird;
        birdtail = bird;
    }
    else{
        birdtail->next = bird;
        birdtail = birdtail->next;
    }
}

void Zoo::InsertElephant(string name, int age){
    shared_ptr<Animal> elephant(new Animal);
    elephant->name = name;
    elephant->age = age;
    elephant->next = NULL;
    if(elephanthead == NULL) {
        elephanthead = elephant;
        elephanttail = elephant;
    }
    else {
        elephanttail->next = elephant;
        elephanttail = elephanttail->next;
    }
}

void Zoo::RemoveLion(string name) {
    if (lionhead == NULL) {
        cout << "List is alredy empty" << endl;
        return;
    }

    while(lionhead!=NULL) {
        if (lionhead->name == name) {
            lionhead->name = lionhead->next->name;
            lionhead->age = lionhead->next->age;

            cout << name << " was deleted from the list." << endl;
            return;
        }
        else {
            lionhead = lionhead->next;
        }
    }
}

void Zoo::RemoveTiger(string name) {
    if (tigerhead == NULL) {
        cout << "List is alredy empty" << endl;
        return;
    }

    while(tigerhead!=NULL) {
        if (tigerhead->name == name) {
            tigerhead->name = tigerhead->next->name;
            tigerhead->age = tigerhead->next->age;

            cout << name << " was deleted from the list." << endl;
            return;
        }
        else {
            tigerhead = tigerhead->next;
        }
    }
}

void Zoo::RemoveBear(string name) {
    if (bearhead == NULL) {
        cout << "List is alredy empty" << endl;
        return;
    }

    while(bearhead!=NULL) {
        if (bearhead->name == name) {
            bearhead->name = bearhead->next->name;
            bearhead->age = bearhead->next->age;

            cout << name << " was deleted from the list." << endl;
            return;
        }
        else {
            bearhead = bearhead->next;
        }
    }
}

void Zoo::RemoveBird(string name) {
    if (birdhead == NULL) {
        cout << "List is alredy empty" << endl;
        return;
    }

    while(birdhead!=NULL) {
        if (birdhead->name == name) {
            birdhead->name = Birdhead->next->name;
            birdhead->age = Birdhead->next->age;

            cout << name << " was deleted from the list." << endl;
            return;
        }
        else {
            birdhead = birdhead->next;
        }
    }
}

void Zoo::RemoveElephant(string name) {
    if (elephanthead == NULL) {
        cout << "List is alredy empty" << endl;
        return;
    }

    while(elephanthead!=NULL) {
        if (elephanthead->name == name) {
            elephanthead->name = elephanthead->next->name;
            elephanthead->age = elephanthead->next->age;

            cout << name << " was deleted from the list." << endl;
            return;
        }
        else {
            elephanthead = elephanthead->next;
        }
    }
}

void Zoo::DisplayLion() {
    shared_ptr<Animal> temp(lionhead);
    while(temp->next != NULL) {
        temp = temp->next;
        cout << temp->name << temp->age << endl;
    }
}

void Zoo::DisplayTiger() {
    shared_ptr<Animal> temp(tigerhead);
    while(temp->next != NULL) {
        temp = temp->next;
        cout << temp->name << temp->age << endl;
    }
}

void Zoo::DisplayBear() {
    shared_ptr<Animal> temp(bearhead);
    while(temp->next != NULL) {
        temp = temp->next;
        cout << temp->name << temp->age << endl;
    }
}

void Zoo::DisplayBird() {
    shared_ptr<Animal> temp(birdhead);
    while(temp->next != NULL) {
        temp = temp->next;
        cout << temp->name << temp->age << endl;
    }
}

void Zoo::DisplayElephant() {
    shared_ptr<Animal> temp(elephanthead);
    while(temp->next != NULL) {
        temp = temp->next;
        cout << temp->name << temp->age << endl;
    }
}
