#include "FinalProject.h"
#include <iostream>
using namespace std;

Zoo::Zoo() {
}

Zoo::~Zoo() {

}

void Zoo::EnterAnimalType(string type) {
    if (type == "Lion") {
        int amount;
        cout << "Enter the number of lions you want to add: " << endl;
        cin >> amount;
        cout << amount << endl;
    }
}
