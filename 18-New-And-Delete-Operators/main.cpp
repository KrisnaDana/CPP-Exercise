#include <iostream>

using namespace std;

int main(){

    // C uses the malloc() and calloc() function to allocate memory dynamically at run time and uses a free() function to 
    // free dynamically allocated memory. C++ supports these functions and also has two operators new and delete, 
    // that perform the task of allocating and freeing the memory in a better and easier way.

    /*There is a difference between declaring a normal array and allocating a block of memory using new.
    The most important difference is, that normal arrays are deallocated by the compiler (If the array is local, 
    then deallocated when the function returns or completes). However, dynamically allocated arrays always remain 
    there until either they are deallocated by the programmer or the program terminates.*/

    //more imformation at https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

    // Pointer initialization to null
    int* p = NULL;
 
    // Request memory for the variable
    // using new operator
    p = new(nothrow) int;
    if (!p)
        cout << "allocation of memory failed\n";
    else
    {
        // Store value at allocated address
        *p = 29;
        cout << "Value of p: " << *p << endl;
    }
 
    // Request block of memory
    // using new operator
    float *r = new float(75.25);
 
    cout << "Value of r: " << *r << endl;
 
    // Request block of memory of size n
    int n = 5;
    int *q = new(nothrow) int[n];
 
    if (!q)
        cout << "allocation of memory failed\n";
    else
    {
        for (int i = 0; i < n; i++)
            q[i] = i+1;
 
        cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
    }
 
    // freed the allocated memory
    delete p;
    delete r;
 
    // freed the block of allocated memory
    delete[] q;

    return 0;
}