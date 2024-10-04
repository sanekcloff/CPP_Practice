#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    
    double engineTemp = 6572.89;
    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    cout << "shieldsUp: " << shieldsUp << endl;
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    int fuel=0;
    cout << "How much fuel? ";
    string inputFuel;
    cin >> inputFuel;
    try
    {
        getline(cin, inputFuel);
        fuel = stoi(inputFuel);
    }
    catch (const invalid_argument& e)
    {
        cerr << "Неверный аргумент: " << e.what() << endl;
    }
    catch (const out_of_range& e)
    {
        cerr << "Аргумент вне диапазона: " << e.what() << endl;
    }
    cout << "fuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;

    return 0;
}