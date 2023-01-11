#include <iostream>

using namespace std;

int main(){
    // A statement is a fragment or a part of a whole program. It may consist of identifiers, names, literals, operators, and
    // parentheses. Each statement has a role and can perform different functions depending on its type.

    // Declaration statement
    int p;

    // Selector statement
    if(p == 0){
        p = 1;
    }

    // Iteration statement
    while(false){
        p = 0;
    }

    // Expression statement
    int q = 1;

    // Null statement
    ;

    // Compound statement
    p = 1 + 2;

    // Jump statement
    while(false){
        break;
    }

    //  Exception Handling statement
    // try{
    //     p = 1;
    // }catch(){
    //     p = 2;
    // }finally{
    //     p = 3;
    // }

}