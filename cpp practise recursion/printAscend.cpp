// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printAscAndDesc(int start, int end)
{
    if (start == end)
    {
        cout << start << endl;
    }
    else
    {
        cout << start << endl;
        printAscAndDesc(start + 1, end);
        cout << start << endl;
        
    }
}

int main() {
    // Write C++ code here
    int n = 1;
    int m = 10;
    printAscAndDesc(n, m);

    return 0;
}

