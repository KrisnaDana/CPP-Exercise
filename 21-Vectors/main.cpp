#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2{10,20,30,40,50};
    vector<int> v3(5, 1);

    for(int i=0; i<v2.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    for(int i=0; i<v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << endl;


    // Add elements to vector
    v1.push_back(6);

    // Access elements of vector
    v1.at(0);

    // Change elements of vector
    v1.at(0) = -1;

    // Delete elements of vector
    v1.pop_back();

    // vector iteration
    vector<int> v5 = {1, 2, 3};
    vector<int>::iterator iter;

    for(iter = v5.begin(); iter != v5.end(); ++iter){
        cout << *iter <<" ";
    }

    return 0;
}