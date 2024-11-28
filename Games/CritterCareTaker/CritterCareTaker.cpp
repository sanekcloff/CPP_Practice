#include <iostream>
#include "Critter.h"
using namespace std;
int main()
{
    Critter crit;
    crit.Talk();
    int choice;
    do
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n\n";
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Good bye!.\n";
            break;
        case 1:
            crit.Talk();
            break;
        case 2:
            crit.Eat();
            break;
        case 3:
            crit.Play();
            break;
        default:
            cout << "\nSorryu, but " << choice << " isn't a valid choice.\n";
            break;
        }
    } while (choice != 0);
}