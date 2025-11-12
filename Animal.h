#include <iostream>
using namespace std;

class Animal{

    string name;
    int age;
    bool isHungry;

public:
Animal(string n,int a,bool f);
Animal();
void display();
void feed();

};
