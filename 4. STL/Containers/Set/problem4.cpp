// 🧩 Intersection of Two Arrays
// 🧠 Find how many elements are common in both arrays.

// Input:
// arr1[] = {10, 20, 30, 40}
// arr2[] = {30, 40, 50, 60}
// Output:
// Intersection size: 2
// 🔧 Hint: Use a set for one array, then check if elements from the second array exist in it.

// basically intersection 
#include<iostream>
#include<set>

using namespace std;
int main()
{
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {30, 40, 50, 60, 10, 70};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2= sizeof(arr2) / sizeof(arr2[0]);

    set<int> unionArray;

    set<int> set1(arr1, arr1 + n1);
    set<int> intersection;

    for (int i = 0; i < n2; ++i) {
        if (set1.count(arr2[i])) {
            intersection.insert(arr2[i]);
        }
    }

    cout << "Intersection size: " << intersection.size() << endl;
    
 return 0;
}