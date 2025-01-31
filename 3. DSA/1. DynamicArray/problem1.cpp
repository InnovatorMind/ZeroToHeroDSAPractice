// Static vs. Dynamic Arrays

#include <iostream>
using namespace std;
int main()
{
    // Static array example
    int staticArr[5] = {1, 2, 3, 4, 5}; // Fixed size = 5

    for (int i = 0; i < 5; i++)
    {
        cout <<staticArr[i] <<" ";
    }
    
    return 0;
}

// Static Array:
// Fixed size (determined at compile-time)
// Stack-allocated
// Cannot be resized

// Dynamic Array:
// Variable size (determined at runtime)
// Heap-allocated
// Can be resized (with manual effort)
