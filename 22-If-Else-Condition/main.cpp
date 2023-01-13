#include <iostream>

using namespace std;

int main(){

    if(!true){
        cout << "false" << endl;
    }else if(!false){
        cout << "true" << endl;
    }else{
        cout << "not true or false" << endl;
    }

    return 0;
}