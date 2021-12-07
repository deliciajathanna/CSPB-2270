#ifndef FinalProject_H__
#define FinalProject_H__

#include <string>
#include <memory>

using namespace std;

// This data structure will store the value of a node and a pointer to the next node.
// This will help us with classifying the type of animal the user inputs and then placing
// animal in the right part of the zoo.
struct Animal {
  int animal; // value of the entered node 
  shared_ptr<Animal> next; // points to the next animal or returns NULL if there are no more 
};

class Zoo{
public:

  // constructor

  Zoo();

  // deconstructor
  ~Zoo(); 

  // This first function will ask the user to enter the type of animal
  // they want to put in the zoo. It will then ask for the animal's
  // name. 

  void EnterAnimalType (string type);

  // This function will append the animal to the list, we will 
  // then call a sort function in order to sort the animal
  // into the correct place based on the type of animal
  
  void Append(shared_ptr<Animal> new_animal);



  
private:
  int empty_count;
};

#endif // FinalProject_H__
