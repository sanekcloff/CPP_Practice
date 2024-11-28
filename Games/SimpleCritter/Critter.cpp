#include "Critter.h"
#include <iostream>
using namespace std;
int Critter::s_Total = 0;
void Critter::Greet()
{
	cout << "Hi, I'm a critter. My hunger level is " << m_Humger << ".\n";
}
int Critter::GetHunger() const
{
	return m_Humger;
}
void Critter::SetHunger(int value)
{
	if (value)
	{
		if (value < 0)
		{
			cout << "Value is negative!\n";
		}
		else
		{
			m_Humger = value;
		}
	}
	else
	{
		cout << "Value null";
	}
}
Critter::Critter(int hunger):
m_Humger(hunger)
{
	cout << "New critter has born" << endl;
	++s_Total;
}

//Critter::Critter(int hunger)
//{
//	m_Humger = hunger;
//	cout << "New critter has born" << endl;
//}

