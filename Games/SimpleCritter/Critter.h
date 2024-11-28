#pragma once
class Critter
{
	public:
		Critter(int hunger = 0);
		static int s_Total;
		void Greet();
		int GetHunger() const;
		void SetHunger(int value);
	private:
		int m_Humger;

};

