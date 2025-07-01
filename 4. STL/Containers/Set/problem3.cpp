// 🧩 1. Union of Two Arrays
// 🧠 Find the number of distinct elements in the union of two arrays.

// Input:
// arr1[] = {1, 2, 3, 4, 5}
// arr2[] = {1, 2, 3}
// Output:
// 🔧 Hint: Insert all elements from both arrays into a set.

#include<iostream>
#include<set>

using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2= sizeof(arr2) / sizeof(arr2[0]);

    set<int> unionArray;

    for (int i = 0; i < n1; ++i) {
     unionArray.insert(arr1[i]);
    }
    
    for (int i = 0; i < n2; ++i) {
     unionArray.insert(arr2[i]);
    }

    cout << "Union of these array have size: " << unionArray.size() << endl;

    
 return 0;
}