// swap adjecent elements

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2,45, 33, 3, 4, 12, 66, 22, 5};
    int length = sizeof(arr) / sizeof(arr[0]) - 1;

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int item : arr)
    {
        cout << item << " ";
    }

    return 0;
}

