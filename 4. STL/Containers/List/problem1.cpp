// Operations:
// ADD_FRONT x – Add coach x at the front of the train.
// ADD_BACK x – Add coach x at the back of the train.
// REMOVE x – Remove all coaches with number x from the train.
// DISPLAY – Print all coaches in order, separated by space.

#include <iostream>
#include <list>

using namespace std;
int main()
{

    list<int> listt = {10, 20, 30};

    // ADD_FRONT 5
    listt.push_front(5);

    // ADD_BACK 23
    listt.push_back(23);

    // REMOVE 23
    listt.remove(23);

    //Disolay
    for (int val : listt)
        cout << val << " ";


    return 0;
}