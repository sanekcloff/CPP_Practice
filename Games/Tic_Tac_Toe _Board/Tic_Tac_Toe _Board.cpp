#include <iostream>
using namespace std;

int main()
{
    typedef unsigned int uint;

    const uint ROWS = 3u;
    const uint COLUMNS = 3u;
    char board[ROWS][COLUMNS] = { {'0','X','0'},{' ','X','X'},{'X','0','0'}};

    cout << "Here's the tic-tac-toe board:\n";
    for (uint i = 0; i < ROWS; ++i)
    {
        for (uint j = 0; j < COLUMNS; ++j)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "\n'X' moves to the empty location.\n\n";
    board[1][0] = 'X';
    cout << "Now the tic-tac-toe board is:\n";
    for (uint i = 0; i < ROWS; ++i)
    {
        for (uint j = 0; j < COLUMNS; ++j)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << "\n'X' wins!";
}
