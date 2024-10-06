#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    typedef const int c_int;
    c_int GOLD_PIECES = 900;
    int adventures, killed, survivors;
    string leader;
    //Получаю информацию
    cout << "Welcome to Lost Fortune\n\n";
    cout << "Please enter the folowing for your personalized adventure\n";
    cout << "Enter a number: ";
    cin >> adventures;
    cout << "Enter a number, smaller then the first: ";
    cin >> killed;
    survivors = adventures - killed;
    cout << "Enter your last name: ";
    cin >> leader;
}
