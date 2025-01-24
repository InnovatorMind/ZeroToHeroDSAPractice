// Write a program which takes the day number of a week and displays a unique greeting message for the day

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Happy Sunday! Time to relax and recharge." << endl;
            break;
        case 2:
            cout << "Motivation Monday! Let's kickstart the week with energy!" << endl;
            break;
        case 3:
            cout << "Terrific Tuesday! Keep the momentum going!" << endl;
            break;
        case 4:
            cout << "Wonderful Wednesday! You're halfway through the week!" << endl;
            break;
        case 5:
            cout << "Thrilling Thursday! The weekend is almost here!" << endl;
            break;
        case 6:
            cout << "Fantastic Friday! Time to celebrate the week's end!" << endl;
            break;
        case 7:
            cout << "Superb Saturday! Enjoy your well-deserved break!" << endl;
            break;
        default:
            cout << "Invalid day number. Please enter a number between 1 and 7." << endl;
    }

    return 0;
}


