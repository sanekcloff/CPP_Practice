#include <iostream>
using namespace std;

void Swap(int* const pValue1, int* const pValue2) 
{
    int temp = *pValue1;
    *pValue1 = *pValue2;
    *pValue2 = temp;
}
void Swap(int& rValue1, int& rValue2)
{
    int temp = rValue1;
    rValue1 = rValue2;
    rValue2 = temp;
}

int main()
{
    int value1 = 150;
    int value2 = 1000;
    cout << "\nOriginal values:";
    cout << "\nValue1: " << value1;
    cout << "\nValue2: " << value2;
    Swap(&value1, &value2);
    cout << "\n\nSwaped pointer values:";
    cout << "\nValue1: " << value1;
    cout << "\nValue2: " << value2;
    Swap( value1,value2);
    cout << "\n\nSwaped reference values:";
    cout << "\nValue1: " << value1;
    cout << "\nValue2: " << value2;
}


