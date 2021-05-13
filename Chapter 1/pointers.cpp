#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int x = 2021;
    cout << "The Address of variable is: "<< &x << endl;
    cout << "Notice how it changes with each run, since the address isn't the same each time it runs" << endl;

    int* q = &x;

    cout << "The value of x, accessed by q is " << *q << endl;

    *q = 2020;
    cout << "The value of x can also be changed using the pointer to it: " << x << endl;
    return 0;
}