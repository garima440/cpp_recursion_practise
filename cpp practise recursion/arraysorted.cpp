#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int arr[], int arrSize)
{
    bool flag;
    if (arrSize == 1)
    {
        flag = true;
    }
    else
    {
        if (arr[0] <= arr[1])
        {
            if (isSorted((arr + 1), arrSize - 1))
            {
                flag = true;
            }
        }
        else
            {
                flag = false;
            }
    }
    return flag;
}

int main()
{
    int arr[3] = {3, 3, 3};
    cout << boolalpha << isSorted(arr, 3);
    return 0;
}