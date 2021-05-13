#include <iostream>

using namespace std;

enum MealType{ NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

struct Passenger {
    string name;        // passenger name
    MealType  mealPref; // meal preference
    bool isFreqFlyer;   // in the frequent flyer program?
    string freqFlyerNo; // the passenger’s freq. flyer number};
};

int main() {
    Passenger pass = {"John Smith", VEGETARIAN, true, "293145"};
    Passenger *p;

    p = new Passenger;
    p->name = "Pocahontus";
    p->mealPref = REGULAR;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";
    
    cout << pass.name << endl;
    cout << p->name << endl;

    string author = "Samuel Clemes";
    string& penName = author; //penName is an alias for author
    penName = "Mark Twain";

    cout << author << endl;
    cout << penName <<endl;
    delete p; 
    return 0;
}