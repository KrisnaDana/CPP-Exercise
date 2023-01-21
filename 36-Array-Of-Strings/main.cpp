#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main(){


    // Using pointers
    const char* color[4] = {"Blue", "Red", "Green", "Yellow"};
    for(int i = 0; i <4 ; i++){
        cout << color[i] << endl;
    }

    // Using 2D arrays
    const char color2[4][10] = {"Blue", "Red", "Green", "Yellow"};
    cout << endl;
    for(int i = 0; i <4 ; i++){
        cout << color2[i] << endl;
    }

    // Using String Class
    string color3[4] = {"Blue", "Red", "Green", "Yellow"};
    cout << endl;
    for(int i = 0; i <4 ; i++){
        cout << color3[i] << endl;
    }

    // Using vector class
    vector<string> color4 {"Blue", "Red", "Green", "Yellow"};
    cout << endl;
    for(int i = 0; i <4 ; i++){
        cout << color4[i] << endl;
    }

    // Using array class
    array<string, 4> color5 {"Blue", "Red", "Green", "Yellow"};
    cout << endl;
    for(int i = 0; i <4 ; i++){
        cout << color5[i] << endl;
    }

    return 0;
}