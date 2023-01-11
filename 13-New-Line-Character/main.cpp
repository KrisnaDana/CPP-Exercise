#include <iostream>

using namespace std;

int main(){
    // endl - end line (flush the buffer, no memory allocation needed)
    // "\n" - new line (didn't flush the buffer, memory allocation needed)

    cout << endl;
    cout << "Hello";
    cout << "\n";
    cout << "Hi";

    return 0;
}