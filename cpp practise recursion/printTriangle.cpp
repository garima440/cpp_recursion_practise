#include <iostream>
using namespace std;


void printSpaces (int spaces)
{
    if (spaces <= 0)
    {
        return;
    }
    printSpaces(spaces - 1);
    cout << "-";
}

void printStars (int stars)
{
    if (stars <= 0)
    {
        return;
    }
    printStars(stars - 1);
    cout << "* ";
}

void printTriangle (int n, int num)
{
    if (n <= 0)
    {
        return;
    }
    printSpaces(n - 1);
    printStars(num - n + 1);
    cout << endl;
    printTriangle(n - 1, num);
}

int main()
{
    printTriangle(5, 5);
    return 0;
}