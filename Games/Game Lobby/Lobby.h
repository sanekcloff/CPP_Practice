#pragma once
#include <iostream>;
#include <string>;
#include "Player.h";

using namespace std;

class Lobby
{
	// Some shit
	friend ostream& operator<<(ostream& os, const Lobby& aLobby);
public:
	Lobby();
	~Lobby();
	void AddPlayer();
	void RemovePlayer();
	void Clear();
private:
	Player* m_pHead;

};

