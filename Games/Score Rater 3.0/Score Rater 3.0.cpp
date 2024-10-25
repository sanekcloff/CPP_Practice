#include <iostream>
using namespace std;

int main()
{
    typedef int MyCoolInt;
    MyCoolInt score;
    cout << "Enter yoour score\n";
    cin >> score;
    if (score >= 1000)
    {
        cout << "Your score 1000 or more!\n";
    }
    else if (score >= 500)
    {
        cout << "You score 500 or more!\n";
    }
    else if (score >= 250)
    {
        cout << "Yuo score 250 or more!\n";
    }
    else
    {
        cout << "Your score less than 250!\n";
    }
    return 0;
}

