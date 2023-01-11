#include <iostream>

// A namespace provides scope and order to the identifiers in your code. It is a declarative region that allows us to
// create logically separate namespaces, thereby preventing name collisions when we include multiple libraries. 

using namespace std;

namespace test{
    void fun(){
        cout << "fun1" << endl;
    }
}

namespace test2{
    void fun(){
        cout << "fun2" << endl;
    }
}

using namespace test2;

int main(){
    fun();
    return 0;
}