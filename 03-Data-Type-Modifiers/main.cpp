#include <iostream>

using namespace std;

int main(){
    // We use this modifier as a prefix for only int and char data types.
    // It stores only the Positive, Negative, and the Zero when used for integer data types
    signed int num = -1;

    // An unsigned modifier is used only for the int and char data types.
    // but unlike the signed modifiers, it stores only a positive or zero value. 
    unsigned int num2 = 0;

    // this modifier helps modify the minimum values an int data type can hold
    // Short int and short are equivalent to each other, hence can be used synonymously
    short int num3 = 1;

    // This modifier helps modify the maximum values a data type can hold.
    // Even long int and long are equivalent to each other, hence can be used synonymously
    long int num4 = 1000000000;


    long unsigned int num5 = 100000000;

    return 0;
}