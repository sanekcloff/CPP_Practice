#include <iostream>
#include <string>
using namespace std;

class Critter {
public:
    Critter(const string& name = "", int age = 0);
    ~Critter();
    Critter(const Critter& critter);
    Critter& operator=(const Critter& critter);
    void Greet() const;
private:
    string* m_pName;
    int m_Age;
};
Critter::Critter(const string& name, int age)
{
    cout << "Constructor called\n";
    m_pName = new string(name);
    m_Age = age;
}
Critter::~Critter()
{
    cout << "Destructor called\n";
    delete m_pName;
}
Critter::Critter(const Critter& critter)
{
    cout << "Copy constructor called\n";
    m_pName = new string(*(critter.m_pName));
    m_Age = critter.m_Age;
}
Critter& Critter::operator=(const Critter& critter)
{
    cout << "Overloaded Assignment Operator called\n";
    if (this != &critter)
    {
        delete m_pName;
        m_pName = new string(*(critter.m_pName));
        m_Age = critter.m_Age;
    }
    return *this;
}
void Critter::Greet() const
{
    cout << "I'm " << *m_pName << ", Age " << m_Age << endl;
}
void testDestructor();
void testCopyConstructor(Critter aCopy);
void testAssignmentOp();

int main()
{
    testDestructor();
    cout << endl;

    Critter crit("Poochie", 5);
    crit.Greet();
    testCopyConstructor(crit);
    
    cout << endl;

    testAssignmentOp();
}

void testDestructor()
{
    Critter toDestroy("Rover", 3);
    toDestroy.Greet();
}
void testCopyConstructor(Critter aCopy)
{
    aCopy.Greet();
}
void testAssignmentOp()
{
    Critter crit1("crit1", 7);
    Critter crit2("crit2", 9);
    crit1 = crit2;
    crit1.Greet();
    crit2.Greet();
    cout << endl;

    Critter crit3("crit", 11);
    crit3 = crit3;
    crit3.Greet();
}
