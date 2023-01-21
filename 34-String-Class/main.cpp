#include <iostream>
#include <string>

using namespace std;

int main(){

    string str;
    cin >> str;
    cout << str << endl;

    //insert character
    str.push_back('s');
    cout << str << endl;

    //delete character
    str.pop_back();
    cout << str << endl;

    //display length
    cout << str.length() << endl;

    return 0;
}