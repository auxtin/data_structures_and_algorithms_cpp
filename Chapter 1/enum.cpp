#include <cstdlib>
#include <iostream>
#include <typeinfo> // used to get the type of variable

using namespace std;
//          0    1    2    3    4    5    6  
enum Day { SUN, MON, TUE, WED, THU, FRI, SAT};

enum Mood{HAPPY = 3, SAD = 1, ANXIOUS = 4, SLEEPY = 2};

int main() {
    Day today = THU;
    Mood myMood = ANXIOUS;
    cout << "Today is the " << today << "th day of the week" <<  endl; 
    cout << "My Mood is " << myMood << endl;
    return 0;
}