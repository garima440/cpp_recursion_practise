#include <iostream>
using namespace std;

bool is2DupSequence(int arr[], int arrSize)
{
    bool flag;
    if (arrSize == 0)
    {
        flag = true;
    }
    else
    {
        if (arr[0] == arr[1])  
        {
            if (is2DupSequence(arr+2, arrSize - 2))
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
    const int arrSize = 6;
    int arr[arrSize] = {1, 1, 13, 13, 0, 0};
    cout << boolalpha << is2DupSequence(arr, arrSize);
    return 0;
}