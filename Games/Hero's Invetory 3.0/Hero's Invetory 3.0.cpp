#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> invetory;
    invetory.push_back("Sword!");
    invetory.push_back("Armor!");
    invetory.push_back("Shield!");
    vector<string>::iterator elIterator;
    vector<string>::const_iterator iter;
    cout << "Hero items:\n";
    for (iter = invetory.begin(); iter != invetory.end(); ++iter)
    {
        cout << *iter << "\n";
    }
    cout << "\nYou trade your sword for a battle axe.";
    elIterator = invetory.begin();
    *elIterator = "Battle axe";
    cout << "Hero items:\n";
    for (iter = invetory.begin(); iter != invetory.end(); ++iter)
    {
        cout << *iter << "\n";
    }
    cout << "\nThe item name'" << *elIterator << "' has ";
    cout << (*elIterator).size() << " letters in it.\n";
    cout << "\nThe item name'" << *elIterator << "' has ";
    cout << elIterator->size() << " letters in it.\n";
    cout << "\nYou recover a crossbow from slain enemy.";
    invetory.insert(invetory.begin(), "Crossbow");
    cout << "Hero items:\n";
    for (iter = invetory.begin(); iter != invetory.end(); ++iter)
    {
        cout << *iter << "\n";
    }
    cout << "\nYour armor has been destroyed!\n";
    invetory.erase(invetory.begin() + 2);
    cout << "Hero items:\n";
    for (iter = invetory.begin(); iter != invetory.end(); ++iter)
    {
        cout << *iter << "\n";
    }
}
