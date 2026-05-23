#include <iostream>
using namespace std ;

int main(){
    int a = 42;
    int* ptr = &a;

    cout << "Value: "<< a << '\n';
    cout << "Address: " << &a << '\n';
    cout << "Pointer value: " << *ptr << '\n'; 
    cout << "Address of pointer: " << &ptr << '\n';
    
    *ptr = 100; // Modifying the value of 'a' through the pointer
    cout << "New value of a: " << a << '\n'; // Should output 100

    return 0;
}