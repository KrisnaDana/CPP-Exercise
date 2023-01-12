#include <iostream>

using namespace std;

int main(){
    // Arithmetic operatiors
    // These operators are used to perform arithmetic/mathematical operations on operands.
    // Examples: (+, -, *, /, %,++,–). Arithmetic operators are of two types: 
    // Unary operator
    int val1 = 5;
    val1++;
    // Binary operator
    int val2 = 1;
    int val3 = 2;
    cout << val2 + val3 << endl;

    // Relational operators
    /*These are used for the comparison of the values of two operands. For example, checking if one operand is equal to the other operand or not, 
    whether an operand is greater than the other operand or not, etc. Some of the relational operators are (==, >= , <= )
    (See this article for more reference).*/
    int val4 = 2;
    int val5 = 3;
    val4 < val5; // operator to check if val4 is smaller than val5

    //Logical operators
    /*Logical Operators are used to combine two or more conditions/constraints or to complement the evaluation of the original condition
    in consideration. The result of the operation of a logical operator is a Boolean value either true or false. */
    /*For example, the logical AND represented as the ‘&&’ operator in C returns true when both the conditions under consideration are satisfied.
    Otherwise, it returns false. Therefore, a && b returns true when both a and b are true (i.e. non-zero)(See this article for more reference).*/
    (4 != 5) && (4 < 5);     // true

    // Bitwise Operators
    /*The Bitwise operators are used to perform bit-level operations on the operands. The operators are first converted to bit-level
     and then the calculation is performed on the operands. Mathematical operations such as addition, subtraction, multiplication, etc.
      can be performed at the bit level for faster processing. For example, the bitwise AND operator represented as ‘&’ in C takes two numbers
       as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1(True). */
    int a = 5, b = 9;   // a = 5(00000101), b = 9(00001001)
    cout << (a ^ b);   //  00001100
    cout <<(~a);       // 11111010

    //Asignment operators
    /*Assignment operators are used to assign value to a variable. The left side operand of the assignment operator is a variable and the right
    side operand of the assignment operator is a value. The value on the right side must be of the same data type as the variable on the left side
    otherwise the compiler will raise an error. */
    int val6 = 10, val7 = 20;
    val6+=val7; // same as written below
    val6 = val6 + val7;

    return 0;
}