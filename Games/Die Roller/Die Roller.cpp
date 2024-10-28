#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    typedef unsigned int uint;
    uint castedTime = static_cast<uint>(time(0));
    srand(castedTime);
    // запускаем генератор случайных чисел
    int randomNumber = rand();
    int die = (randomNumber % 6) + 1; //Получаем число между 1 и 6
    cout << "You rolled a " << die << endl;
    cout << time(0);
}

