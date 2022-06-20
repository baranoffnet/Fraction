#include <iostream>
#include <string>
#include <windows.h>
#include "FractionClass.h"
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FractionClass a;
    FractionClass b;
    a.setFraction(1, 2);
    b.setFraction(1, 3);
    FractionClass result1 = a + b;
    cout << "Сложение"<<endl;
    cout << result1.getNumerator() << "/" << result1.getDenominator() << endl;
    /*FractionClass result2 = a - b;
    cout << "Вычитание" << endl;
    cout << result2.getNumerator() << "/" << result2.getDenominator() << endl;*/
    /*FractionClass result3 = a * b;
    cout << "Умножение" << endl;
    cout << result3.getNumerator() << "/" << result3.getDenominator() << endl;*/
    /*FractionClass result4 = a / b;
    cout << "Деление" << endl;
    cout << result4.getNumerator() << "/" << result4.getDenominator() << endl;*/
}

