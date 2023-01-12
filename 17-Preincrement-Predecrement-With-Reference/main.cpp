#include <iostream>

using namespace std;

int main(){

    // In C++, pre-increment (or pre-decrement) can be used as l-value, but post-increment (or post-decrement) can not be used as l-value.

    int a = 10;
    ++a = 20; //works

    cout << a << endl;

    // a++ = 30; error

    return 0;
}