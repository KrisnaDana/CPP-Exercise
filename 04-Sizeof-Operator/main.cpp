#include <iostream>

using namespace std;

int main(){

    //Size of the primitive data types

    cout << "char = " << sizeof(char) << " bytes" << endl;
    cout << "int = " << sizeof(int) << " bytes" << endl;
    cout << "float = " << sizeof(float) << " bytes" << endl;
    cout << "double = " << sizeof(double) << " bytes" << endl;
    cout << "wchar_t = " << sizeof(wchar_t) << " bytes" << endl;


    // Size of data types modifiers
    cout<<"unsigned int =  "<< sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"short = "<< sizeof(short)<<" bytes"<<endl;
    cout<<"long = "<< sizeof(long)<<" bytes"<<endl;
    cout<<"long long = "<< sizeof(long long)<<" bytes"<<endl;
    cout<<"long double = "<< sizeof(long double)<<" bytes"<<endl;

    // sizeof using variable names
    cout<<"sizeof using variable names"<<endl;
    int a = 21;
    cout<<"a is "<< sizeof(a)<<" bytes"<<endl;

    return 0;
}