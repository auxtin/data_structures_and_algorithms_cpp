#include <iostream>

using namespace std;

int main ()
{
    char command;
    cin >> command;
    switch(command) {
        case 'I':
            cout << "You hit the 'I' key!\n";
            break;
        case 'D':
            cout << "You hit the 'D' key!\n";
            break;
        case 'R':
            cout << "You hit the 'R' key!\n";
            break;
        default: 
            cout << "I don't recognize what you pressed!\n";
            break;
    }
    return 0;    
}