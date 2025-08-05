// swap with minVal index

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2, 45, 33, 3, 4, 12, 66, 22, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        int minVal = i;
        for (int j = i; j < length; j++)
        {
            if (arr[j] < arr[minVal])
            {
                minVal = j;
            }
        }
        swap(arr[i], arr[minVal]);
    }

    for (int item : arr)
    {
        cout << item << " ";
    }

    return 0;
}
