#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n = 5;
    int fact = factorial(n);
    cout << fact;
    return 0;
}

int factorial(int n) 
{
    int fact = 1;
    if (n > 1)
    {
        fact = factorial(n - 1);
    }
    fact *= n;
    return fact;
}