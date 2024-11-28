﻿#include <iostream>
using namespace std;
int* intOnHeap(); // Возврат переменной int из кучи
void leak1(); // Создание утчеки памяти
void leak2(); // Создание другой утечки памяти
int main()
{
    int* pHeap = new int;
    *pHeap = 10;
    cout << "*pHeap: " << *pHeap << "\n\n";
    int* pHeap2 = intOnHeap();
    cout << "*pHeap2: " << *pHeap2 << "\n\n";
    cout << "Freeing memory pointed to by pHeap.\n\n";
    delete pHeap;
    cout << "Freeing memory pointed to by pHeap2.\n\n";
    delete pHeap2;
    pHeap = 0;
    pHeap2 = 0;
}
int* intOnHeap()
{
    int* pTemp = new int(20);
    return pTemp;
}
void leak1()
{
    int* drip1 = new int(30);
}
void leak2()
{
    int* drip2 = new int(50);
    drip2 = new int(100);
    delete drip2;
}
