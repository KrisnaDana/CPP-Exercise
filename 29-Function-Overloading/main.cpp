#include <iostream>

using namespace std;

// function with float type parameter
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}

int main(){

    /*In C++, two functions can have the same name if the number and/or type of arguments passed is different.
    These functions having the same name but different arguments are known as overloaded functions*/

    cout << absolute(9.9f) << endl;
    cout << absolute(10) << endl;


    return 0;
}