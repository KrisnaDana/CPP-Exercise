#include <iostream>

using namespace std;

// function prototypes
void helloWorld();
int sum(int x, int y); 


int main(){

    helloWorld();

    cout << sum(10, 20);

    return 0;
}

void helloWorld(){
    cout << "Hello World" << endl;
}

int sum(int x, int y){
    return x + y;
}