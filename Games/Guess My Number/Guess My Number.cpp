#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    typedef unsigned int uint;
    srand(static_cast<uint>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;
    cout << "\tWelcome to Guess my Number\n\n";
    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;
        if (guess > secretNumber)
        {
            cout << "To high!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "To low!\n\n";
        }
        else
        {
            cout << "\nThat's it! You got it in " << tries << " guesses!\n";
        }
    } while (guess != secretNumber);
}

    
