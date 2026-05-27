#include <iostream>
#include <string>
#include <vector>
using namespace std;

void PrintToDoList(vector<string>& v){
    if (v.empty()){
        cout << "List is empty \n";
        return;
    }
    cout << "Your deals: \n";
    for (size_t i = 0; i < v.size(); ++i){
        cout << i + 1 << ". " << v[i] << '\n';
    }

}

void AddToDo(vector<string>& v){
    string line;

    cout << "Enter your tasks(print 'end' to stop): " << '\n';

    while(true){
        getline(cin, line);
        if(line == "end") break;
        v.push_back(line);
    }

}

void DeleteToDo(vector<string>& v){
    size_t i = 0;
    cout << "Enter number of task you wont to delete: " << '\n';
    cin >> i;
    cin.ignore();
    
    if(i == 0 || i > v.size()){
         cout << "Invalid number of task \n";
         return;
    }
    v.erase(v.begin() + i - 1 );
    cout << "Task " << i << " delete successfully \n";

}

void Menu(vector<string>& v){
    while(true){
    int choice = 0;
    cout << "======To Do List====== \n";
    cout << "1. Show Task \n";
    cout << "2. Add Task \n";
    cout << "3. Delete Task \n";
    cout << "4. Clear list \n";
    cout << "0. Exit \n";
    cin >> choice;
    cin.ignore();

    switch (choice){
        case 1:
        PrintToDoList(v);
        break;

        case 2:
        AddToDo(v);
        break;

        case 3:
        DeleteToDo(v);
        break;

        case 4:
        v.clear();
        cout << "All tasks cleared! \n";
        break;

        case 0:
        cout << "Bye \n";
        return;

        default:
        cout << "Pardon, invalid choice, try again";
    }

    }
}

int main(){
    vector <string> Todo;
    Menu(Todo);
}