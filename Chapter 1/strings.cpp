#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;
using std::string;

int main() {
    string s = "to be";
    string t = "not " + s;
    string u = s + " or " + t;
    
    if( s > t)
    {
        cout << u << endl;
    }

    s = "John";
    cout << "String 's' is now: " << s << endl;
    int i = s.size();
    cout <<"Size of 's' using size() is: " << i << endl;
    char c = s[3];
    s += " Smith";
    cout << "Using s+= smith, we get: " << s << endl;
    
    return 0;
}