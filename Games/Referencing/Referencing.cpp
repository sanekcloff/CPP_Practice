#include <iostream>
using namespace std;

int main()
{
    int myScore = 500;
    int& mikesScore = myScore;
    cout << "My score = " << myScore << ";\nMikes Score = " << mikesScore << endl;
    myScore -= 100;
    cout << "My score = " << myScore << ";\nMikes Score = " << mikesScore << endl;
    mikesScore += 100;
    cout << "My score = " << myScore << ";\nMikes Score = " << mikesScore << endl;
}
