#include "mathFunctions.h"
#include <iostream>

using namespace std;

int absolute(int x)
{
    if (x >= 0) return x;
    else return -x;
}

double reciprocalFunction(double x) {
    return 1 / x;
}

double pow(double x, int degree) {
    if (degree == 0) return 1;
    double res = x;
    for (int i = 0; i < absolute(degree) - 1; ++i) {
        res *= x;
    }
    if (degree < 0) res = 1.0 / res;
    return res;
}

double sqrt(double x, int degree)
{
    double L = 0, R = x;
    double M = (L + R) / 2;
    while (R - L > 0.0001) {
        if (pow(M, degree) <= x) {
            L = M;
        }
        else {
            R = M;
        }
        M = (L + R) / 2;
    }
    return M;
}

void Root()
{
    cout << "Enter a number: ";
    double x;
    cin >> x;
    cout << "Enter a degree of root(only integers): ";
    int degree;
    cin >> degree;
    
        cout << "==========================" << endl;
        cout << "root(" << x << ", " << degree << ") = " << sqrt(x, degree) << endl;
        cout << "==========================" << endl;
}

void Exponentiation()
{
    cout << "Enter a number: ";
    double x;
    cin >> x;
    cout << "Enter a degree of exponentiation(onle integers): ";
    int degree;
    cin >> degree;
    if (x == 0.0 && degree == 0) cout << "Zero to zero power error" << endl;
    else {
        cout << "==========================" << endl;
        cout << "pow(" << x << ", " << degree << ") = " << pow(x, degree) << endl;
        cout << "==========================" << endl;
    }
}

void  Trigonometry()
{
    char quit = ' ';
    while (quit != 'Q') {
        cout << "Choose operation:\n1.sin\n2.cos\n3.tg\n";
        int op;
        cin >> op;
        switch (op) {
        case 1: Sinus_print(); break;
        case 2: Cosinus_print(); break;
        case 3: Tangens_print(); break;
        default: cout << "Invalis operation" << endl;
        }
        cout << "Continue or quit(C to continue, Q to quit)?" << endl;
        cin >> quit;
    }

    
}

void reciprocal() {
    double x;
    cout << "x="; cin >> x;
    if (x == 0) cout << "zero divission error";
    else cout << "1/x = " << reciprocalFunction(x) << endl;
}

double Sinus(double x, double eps)
{
    int n = 0;
    double an = x, y = 0.0;

    while (fabs(an) > eps)
    {
        y += an;
        n++;
        an *= -x * x / (2 * n * (2 * n + 1));
    }
    return y;
}

double Cosinus(double x, double eps)
{
    int n = 0;

    double an = 1, y = 0.0;

    while (fabs(an) > eps)
    {
        y += an;
        n++;
        an *= -x * x / (2 * n * (2 * n - 1));
    }
    return y;
}

void Sinus_print()
{
    double x; 
    cout << "x="; cin >> x;
    cout << "sin(" << x << ") = " << Sinus(x, 0.00001) << "\n";
}

void Cosinus_print()
{
    double x;
    cout << "x="; cin >> x;
    cout << "cos(" << x << ") = " << Cosinus(x, 0.00001) << "\n";
}

void Tangens_print()
{
    double x;
    cout << "x="; cin >> x;
    cout << "tg(" << x << ") = " << Sinus(x, 0.00001) / Cosinus(x, 0.00001) << endl;
}
