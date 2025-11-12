#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============
int main() {

    Animal a=Animal("Lion",5,true);
    Animal p=Animal("Parrot",2,false);
    Animal S=Animal("Snake",3,true);
    Animal A*[]={a,p,S};
   Enclosure E=Enclosure(5,3,A);
   E.addAnimal("Elephant");
   E.addAnimal("Eagle");
   E.addAnimal("Crocodile");
   Visitor v=Visitor("Sara Ali",3);
   v.displayinfo();
   E.displayAnimals();
   
    
    return 0;
}
