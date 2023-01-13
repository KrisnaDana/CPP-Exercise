#include <iostream>

using namespace std;

int main(){

    int arr[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    for(int i=0; i<3; i++){
        for(int j = 0; j<2; j++){
            cout << arr[i][j] << endl;
        }
    }

    int arr2[2][2][2] = {
        {
            {1, 2},
            {3, 4},
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    cout << endl;

    for(int i=0; i<2; i++){
        for(int j = 0; j<2; j++){
            for(int k = 0; k<2; k++){
                cout << arr2[i][j][k] << endl;
            }
        }
    }
    
    return 0;
}