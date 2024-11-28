#include <iostream>
#include "Lobby.h"

int main()
{
    Lobby myLobby;
    myLobby.AddPlayer();
    cout << myLobby;
    myLobby.AddPlayer();
    myLobby.AddPlayer();
    cout << myLobby;
    myLobby.RemovePlayer();
    cout << myLobby;
    myLobby.Clear();
    cout << myLobby;
}

