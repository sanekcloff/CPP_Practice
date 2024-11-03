#include <iostream>
using namespace std;
void BadSwap(int a, int b);
void GoodSwap(int& a, int& b);

int main()
{
	int myScore = 500;
	int yourScore = 1000;
	cout << "\nMy score = " << myScore << "\nYour score = " << yourScore << endl;
	BadSwap(myScore,yourScore);
	cout << "\nMy score = " << myScore << "\nYour score = " << yourScore << endl;
	GoodSwap(myScore,yourScore);
	cout << "\nMy score = " << myScore << "\nYour score = " << yourScore << endl;

}
void BadSwap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void GoodSwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

