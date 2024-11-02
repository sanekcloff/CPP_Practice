#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
    const int MAX_WRONG = 8;
    vector<string> words = { "GUESS", "HANGMAN", "DIFFICULT" };
    vector<string> ::const_iterator iter;
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    int wrong = 0;
    string soFar(THE_WORD.size(), '-');
    string used = "";
    cout << "Welcome to Hangman. Goo luck!\n";
    while ((wrong<MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong) << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is:\n" << soFar << endl;
        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess);
        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }
        used += guess;
        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " is int the word.\n";
            for (int i = 0; i < THE_WORD.length(); i++)
            {
                if (THE_WORD[i] == guess)
                {
                    soFar[i] = guess;
                }
            }
        }
        else
        {
            cout << "Sorry, " << guess << " isn't in the word.\n";
            ++wrong;
        }
    }
    if (wrong==MAX_WRONG)
    {
        cout << "\nYou've been hanged!";
    }
    else
    {
        cout << "You win!";
    }
    cout << "THe word was " << THE_WORD << endl;
}

