#include <iostream>
using namespace std;

int palindromDistance(int* arr, int arrSize);

int main()
{
    int arr[6] = {1, 3, 6, 6, 5, 2};
    int distance = palindromDistance(arr, 6);
    cout << distance;


    return 0;
}

int palindromDistance(int* arr, int arrSize)
{
    int distance;
    if (arrSize == 0)
    {
        distance = 0;
    }
    else if (arr[0] != arr[arrSize - 1])
    {
        distance = 1 + palindromDistance(arr+1, arrSize - 2);
    }
    else 
    {
        distance = palindromDistance(arr+1, arrSize - 2);
    }
    return distance;
}