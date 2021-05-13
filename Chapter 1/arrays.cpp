#include <cstdlib>
#include <iostream>

using namespace std;

int main ()
{
    char c[] = {'c','a','t'};
    char* p = c;
    char* q = &c[0];
    cout << p << endl;
    cout << q << endl;
    cout << c[2] << p[2] << q[2];

    return 0;

}