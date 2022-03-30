#include<bits/stdc++.h>
using namespace std;
// if selection
bool accept()
{
    cout << "Do you want to proceed (y or n)?\n"; // write question
    char answer = 0;
    cin >> answer; // read answer
    if (answer == 'y') return true;
    return false;
    // return (answer == 'y')?true:false;
}
// switch selection
bool accept2()
{
    cout << "Do you want to proceed (y or n)?\n"; // write question
    char answer = 0;
    cin >> answer; // read answer
    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no.\n";
            return false;
    }
}
// while + switch
bool accept3()
{
    int tries = 1;
    while (tries<4) {
        cout << "Do you want to proceed (y or n)?\n"; // write question
        char answer = 0;
        cin >> answer; // read answer
        switch (answer) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                cout << "Sorry, I don't understand that.\n";
                ++tries; // increment
        }
    }
    cout << "I'll take that for a no.\n";
    return false;
}
int main(){
    accept();
    accept2();
    accept3();
    return 0;
}