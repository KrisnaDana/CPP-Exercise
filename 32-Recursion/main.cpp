#include <iostream>

using namespace std;

int factorial(int x);

int main(){

    cout << factorial(10) << endl;

    return 0;
}

int factorial(int x){
    if(x>1){
        return x * factorial(x-1);
    }else{
        return 1;
    }
}