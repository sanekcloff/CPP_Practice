﻿#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector <int>::const_iterator iter;
    cout << "Creating a list of scores.\n";
    vector <int> scores;
    scores.push_back(1500);
    scores.push_back(2500);
    scores.push_back(1000);
    scores.push_back(1300);
    scores.push_back(1200);
    scores.push_back(5000);
    cout << "\nHigh score:\n";
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << "\n";
    }
    cout << "\nFinding a score.";
    int score;
    cout << "\nEnter a score to find: ";
    cin >> score;
    iter = find(scores.begin(), scores.end(), score);
    if (iter != scores.end())
        cout << "Score " << *iter << " found!\n";
    else
        cout << "Score not found!\n";
    cout << "\nRandomizing scores.";
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(scores.begin(), scores.end());
    cout << "\nHigh score:\n";
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << "\n";
    }
    cout << "Sorting scores.";
    sort(scores.begin(), scores.end());
    cout << "\nHigh score:\n";
    for (iter = scores.begin(); iter != scores.end(); iter++)
    {
        cout << *iter << "\n";
    }
}

