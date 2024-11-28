#pragma once
class Critter
{
	public:
		Critter(int hunger = 0, int boredom = 0);
		void Talk();
		void Eat(int food = 4);
		void Play(int fun = 4);
	private:
		int m_Hunger;
		int m_Boredom;
		int GetMood() const;
		void PassTime(int time = 1);
};

