#include <iostream>

using namespace std;

int main(){

    for(int i = 0; i < 10 ; i++){
        cout << i << " ";
    }
    cout << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    for(int a : arr){
        cout << a << " ";
    }

    return 0;
}