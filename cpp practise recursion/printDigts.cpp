#include <iostream>
using namespace std;

void printDigits(int num)
{
    int currDig = num % 10;
    if (num != 0)
    {
        printDigits(num / 10);
        cout << currDig << endl;
    }
}

int main()
{
    int num;
    cout << "Please enter any integer: ";
    cin >> num;

    printDigits(num);
    return 0;
}