#ifndef FinalProject_H__
#define FinalProject_H__

#include <string>
#include <memory>

using namespace std;

// This data structure will store the value of a node and a pointer to the next node.
// This will help us with classifying the type of animal the user inputs and then placing
// animal in the right part of the zoo.
struct Animal {
  string name; // name of the animal
  int age; // age of the entered animal 
  shared_ptr<Animal> next; // points to the next animal in the list or returns NULL if there are no more
};

class Zoo{
public:

  // constructor

  Zoo();

  // deconstructor
  ~Zoo();

  // This first function will ask the user to enter the type of animal
  // they want to put in the zoo. It will then ask for the animal's
  // name and the age, and then go repeat the process till the user
  // is finished. 

  void EnterAnimalType (int type);

  // This functions will add animals to their specific
  // linked list. We don't need an offset because the 
  // list will be empty, thus any animals entered will be new.

  void InsertAnimal(string name, int age);

  // This function will remove animals from their 
  // specific linked lists.

  void RemoveAnimal(string name);

  // Funtion to get the head or top of every list

  shared_ptr<Animal> GetTop();

  // This will display all linked lists

  void DisplayAnimal(shared_ptr<Animal> head);



private:
  shared_ptr<Animal> head; // head or top of the list
  shared_ptr<Animal> tail; // tail or end of the list
};

#endif // Zoo_H__
