#include <iostream>
#include <string>
using namespace std;

class Critter
{
    friend void Peek(const Critter& crit);
    friend ostream& operator<<(ostream& os, const Critter& aCritter);
public:
    Critter(const string& name = "");
private:
    string m_Name;
};
Critter::Critter(const string& name):
m_Name(name)
{}
void Peek(const Critter& aCritter)
{
    cout << aCritter.m_Name << endl;
}
ostream& operator<<(ostream& os, const Critter& aCritter)
{
    os << "Critter Object - ";
    os << "m_Name: " << aCritter.m_Name;
    return os;
}

int main()
{
    Critter crit("Pochie");
    Peek(crit);
    cout << crit;
}