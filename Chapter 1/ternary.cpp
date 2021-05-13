#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Enter x\n";
    cin >> x; 
    cout << "Enter y\n";
    cin >> y; 

    int smaller = (x < y ? x : y);

    cout << "Smaller number is " << x <<endl;
    return 0;

}