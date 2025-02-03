#include <bits/stdc++.h>
using namespace std;

// function overloading

class Math
{

public:
    void calculate(int a)
    {
        cout << a * a << endl;
    }

    void calculate(int a, int b)
    {
        cout << a * b << endl;
    }

    void calculate(int a, int b, int c)
    {
        cout << a * b * c << endl;
    }

    void calculate(double a)
    {
        cout << 3.14 * a * a << endl;
    }
};

int main()
{

    Math m1;

    m1.calculate(9.7);
    m1.calculate(9,7);
    m1.calculate(9,7,4);
    m1.calculate(9);
}