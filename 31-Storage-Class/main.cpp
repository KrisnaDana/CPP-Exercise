#include <iostream>

using namespace std;

// Global variable
// If a variable is defined outside all functions, then it is called a global variable.
// The scope of a global variable is the whole program. This means, It can be used and changed at any part of the program after its declaration.
int a;


void ready(){
    // Local Variable
    // A variable defined inside a function (defined inside function body between braces) is called a local variable or automatic variable.
    // Its scope is only limited to the function where it is defined. In simple terms, local variable exists and can be accessed only inside a function.
    // The life of a local variable ends (It is destroyed) when the function exits.
    int x;
}

int main(){

    // Static local variable
    // A static local variable exists only inside a function where it is declared (similar to a local variable) but 
    // its lifetime starts when the function is called and ends only when the program ends.
    // The main difference between local variable and static variable is that, the value of static variable persists the end of the program.
    static int y;

    return 0;
}