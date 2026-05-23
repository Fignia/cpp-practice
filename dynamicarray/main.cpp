#include <iostream>
using namespace std;

int main(){
int size = 0;
cout << "enter your array size: ";
cin >> size;
    if (size <= 0){ // checking the array size for correctness
        cout <<"The size cannot be less than or equal to 0";
        return 1;
    }
    int* arr = new int [size];
    if (arr == nullptr){  //checking nullptr
        cout << "buy new ram stick";
        return 1;
    }
        
    cout << '\n' << "enter your data to array"<< '\n';
    for (int i = 0; i < size ;i++){
        cin >> arr[i];
    }

    cout << "your data & address:"<< '\n';
    for (int i = 0; i < size ;i++){
        cout << "value " << i+1 << ": " << arr[i] << "  address:  " <<&arr[i] << '\n';
    }

    delete[] arr;
    return 0;
    
}
