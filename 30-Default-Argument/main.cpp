#include <iostream>

using namespace std;

void display(char = '*', int = 10);

int main(){

    display();
    display('#', 1);

    return 0;
}

void display(char x, int y){
    cout << x << " " << y << endl;
}