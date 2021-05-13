#include <iostream>

using namespace std;

void f(int value,int& ref){     // one value and one reference
    value++;                    // no effect on the actual argument
    ref++;                      // modifies the actual argument
    cout<<value<<endl;          // outputs 2
    cout<<ref<<endl;            // outputs 6
}

int main() {
    int cat = 1;
    int dog = 5;
    f(cat, dog);                // pass cat by value, dog by ref
    cout<<cat<<endl;            // outputs 1
    cout<<dog<<endl;            // outputs 6, the modified reference
    return 0;
}