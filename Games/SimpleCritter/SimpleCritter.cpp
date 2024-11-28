#include <iostream>
#include "Critter.h"
#include "Animal.h"
using namespace std;

int main()
{
    cout << "Total critters is " << Critter::s_Total << endl;
    Critter critter1;
    Critter critter2(10);
    Animal animal1;
    cout << "Total critters is " << Critter::s_Total << endl;
    critter2.Greet();
    critter1.SetHunger(9);
    critter2.SetHunger(-1);
    animal1.Level = 8;
    critter1.Greet();
    critter2.Greet();
    animal1.Hello();
}

