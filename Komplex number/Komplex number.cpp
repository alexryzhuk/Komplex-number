// Komplex number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
struct Number
{
    int x = 0;
    int y = 0;
    void inputComplexNumber() {
        cout << "Введіть дійсну і уявну частину комплексного числа" << endl;
        cin >> x >> y;
    }
    void printComplexNumber() {
        if(x == 0) cout << y << "i" << endl;
        else if (y == 1) cout << x << "+" << "i" << endl;
        else if (y == -1) cout << x << "-" << "i" << endl;
        else if(y>0) cout << x << "+" << y <<"i"<< endl;
        else if(y<0) cout << x << y << "i" << endl;         
        else if(y==0) cout << x <<endl;
    }
};
void Sum(int x, int y, int x1, int y1);
void Subtraction(int x, int y, int x1, int y1);
void Multiplication(int x, int y, int x1, int y1);
void Division(int x, int y, int x1, int y1);
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);    
    Number A;
    A.inputComplexNumber();
    A.printComplexNumber();
    Number B;
    B.inputComplexNumber();
    B.printComplexNumber();
    cout << "сума = ";
    Sum(A.x, A.y, B.x, B.y);   
    cout << endl;
    cout << "різниця = ";
    Subtraction(A.x, A.y, B.x, B.y);
    cout << endl;
    cout << "добуток = ";
    Multiplication(A.x, A.y, B.x, B.y);
    cout << endl;
    cout << "ділення = ";
    Division(A.x, A.y, B.x, B.y);
}
void Sum(int x, int y, int x1, int y1) {
    int a;
    int b;
    a = x + x1;
    b = y + y1;
    if (a == 0) cout << b << "i" << endl;
    else if (b == 1) cout << a << "+" << "i" << endl;
    else if (b == -1) cout << a << "-" << "i" << endl;
    else if (b > 0) cout << a << "+" << b << "i" << endl;
    else if (b < 0) cout << a << b << "i" << endl;    
    else if (b == 0) cout << a << endl;
}
void Subtraction(int x, int y, int x1, int y1) {
    int a, b;
    a = x - x1;
    b = y - y1;
    if (a == 0) cout << b << "i" << endl;
    else if (b == 1) cout << a << "+" << "i" << endl;
    else if (b == -1) cout << a << "-" << "i" << endl;
    else if (b > 0) cout << a << "+" << b << "i" << endl;
    else if (b < 0) cout << a << b << "i" << endl;    
    else if (b == 0) cout << a << endl;
}
void Multiplication(int x, int y, int x1, int y1){
    int a;
    int b;
    a = (x * x1) - (y * y1);
    b = (x * y1) + (x1 * y);
    if (a == 0) cout << b << "i" << endl;
    else if (b == 1) cout << a << "+" << "i" << endl;
    else if (b == -1) cout << a << "-" << "i" << endl;
    else if (b > 0) cout << a << "+" << b << "i" << endl;
    else if (b < 0) cout << a << b << "i" << endl;
    else if (b == 0) cout << a << endl;
}
void Division(int x, int y, int x1, int y1) {
    int a;
    int b;
    a = ((x * x1) + (y * y1)) / ((x1 * x1) + (y1 * y1));
    b = ((y * x1) - (x * y1)) / ((x1 * x1) + (y1 * y1));
    if (a == 0) cout << b << "i" << endl;
    else if (b == 1) cout << a << "+" << "i" << endl;
    else if (b == -1) cout << a << "-" << "i" << endl;
    else if (b > 0) cout << a << "+" << b << "i" << endl;
    else if (b < 0) cout << a << b << "i" << endl;
    else if (b == 0) cout << a << endl;
}