#include <iostream>

using namespace std;

int main(){
    // Unary minus
    /*The minus operator changes the sign of its argument. A positive number becomes negative, and a negative number becomes positive.*/
    int x1 = 1;
    int x2 = -x1;

    // Increment
    // It is used to increment the value of the variable by 1. 
    int y1 = 1;
    int y2 = ++y1;  // y2 = 2 prefix increment
    int y3 = y1++;  // y3 = 1 postfix increment
    cout << y3 << endl; // y3 = 2

    // Decrement
    // It is used to decrement the value of the variable by 1.
    int z1 = 1;
    int z2 = --z1; // z2 = 0 prefix decrement
    int z3 = z1--; // z3 = 1 postfix decrement
    cout << z3 << endl; // z3 = 0

    // NOT(!)
    // It is used to reverse the logical state of its operand. If a condition is true, then the Logical NOT operator will make it false.
    int a = !true; //false

    // Addressof operator(&)
    // It gives an address of a variable. It is used to return the memory address of a variable.
    // These addresses returned by the address-of operator are known as pointers because they “point” to the variable in memory.
    int b1;
    int* b2;
    b2 = &b1;
    cout << b2;

    return 0;
}