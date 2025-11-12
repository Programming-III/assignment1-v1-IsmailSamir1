
#include <iostream>
#include "Animal.h"
using namespace std;

class Enclousure{

    private:
    Animal* animal;  
    int capacity;
    int CurrentCount;

    public:
    Enclousure(Animal* a, int cap, int current);
    ~Enclousure();
    void addAnimal(Animal* a);
    void displayAnimals();


};
