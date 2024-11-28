// Pointing
// Демонстрирует работу с указателями
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int* pApointer; //обявляем пустой казатель
    int* pScore = 0;
    int score = 1000;
    int& rScore = score;
    pScore = &score; //присваивание указателя pScore, адрес переменной score
    cout << "Reference rScore = " << &rScore << endl;
    cout << "Addres &score = " << &score << endl;
    cout << "Pointed addres pScore = " << pScore << endl;

    cout << "\nVariable argument:";
    cout << "\nscore = " << score;
    cout << "\nrScore = " << rScore;
    cout << "\npScore = " << *pScore;
    // Use variable
    score += 500;
    cout << "\n\nAdd 500 to score!";
    cout << "\nVariable argument:";
    cout << "\nscore = " << score;
    cout << "\nrScore = " << rScore;
    cout << "\npScore = " << *pScore;
    // Use reference
    rScore += 100;
    cout << "\n\nAdd 100 to rScore!";
    cout << "\nVariable argument:";
    cout << "\nscore = " << score;
    cout << "\nrScore = " << rScore;
    cout << "\npScore = " << *pScore;
    // Use pointing
    *pScore += 40;
    cout << "\n\nAdd 40 to pScore!";
    cout << "\nVariable argument:";
    cout << "\nscore = " << score;
    cout << "\nrScore = " << rScore;
    cout << "\npScore = " << *pScore;

    int newScore = 10;
    cout << "\n\nAdd newScore = " << newScore << " to pScore!";
    pScore = &newScore;
    cout << "\n\nNew address newScore to pScore!";
    cout << "\nVariable argument:";
    cout << "\nscore = " << score;
    cout << "\nrScore = " << rScore;
    cout << "\npScore = " << *pScore;

}