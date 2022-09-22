# CSPB 2400 

The tree of this Project: 

.  
├── CMakeLists.txt  
├── CMakeLists.txt.in  
├── README.md  
├── app  
│   └── main.cpp  
├── build  
├── code  
│   ├── FinalProject.cpp  
│   └── FinalProject.h  

CMakeLists.txt      : This file makes the initial Cmake file that we will use to complie and run the program
CMakeLists.txt.in   : This file makes the initial Cmake file that we will use to complie and run the program
README.md           : Readme file  
app\                : Application folder  
main.cpp            : Application main file that has the main program, and tests that we will run.
build\              : This folder contains the .cpp and .h file that we used to build the program
code\               : all code is in this file 
Zoo.cpp    : The FinalProject source for the file  
Zoo.h      : The FinalProject header file 


In order to compile and run this project, we need to use the Build folder. 'Make' will compile the program, and ./run_app will run the program. You will then be presented with a list of options that will expand on what the program does. This program can insert, remove, and display different animals in that are entered. 

This project has the following functions:

* **Zoo()** - Zoo constructor
* **~Zoo()** - Zoo deconstructor
* **void EnterAnimalType (int type)** - Ask the user for the type of animal they want to insert
* **void InsertAnimal(string name, int age)** - Inserts the animal
* **void RemoveAnimal(string name)** - Removes the animal
* **shared_ptr<Animal> GetTop()** - Gets the top of the list
* **void DisplayAnimal(shared_ptr<Animal> head)** Displays the list of animals