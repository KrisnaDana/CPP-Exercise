#include <iostream>

using namespace std;

int main(){

    int arr[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter array int value index: " << i << " = ";
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }


    return 0;
}