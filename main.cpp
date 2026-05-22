#include <iostream>
using namespace std;

int main() {
    double a, b;  
    int to_do;
    
    cout << "Type first number: "; 
    cin >> a;
    cout << "Now second number: ";
    cin >> b;
    cout << "Choose an action: 1.Add 2.Subtract 3.Divide 4.Multiply\n";
    cin >> to_do;

    if (to_do == 1) cout << "Result: " << a + b << "\n";
    else if (to_do == 2) cout << "Result: " << a - b << "\n";
    else if (to_do == 3) {
        if (b == 0) cout << "Error: division by zero!\n";
        else cout << "Result: " << a / b << "\n";
    }
    else if (to_do == 4) cout << "Result: " << a * b << "\n";
    else cout << "Unknown action\n";

    return 0;
}