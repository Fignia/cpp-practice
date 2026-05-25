#include <iostream>
#include <memory>
#include <string>
#include <utility>
using namespace std;

struct Student{
    string name;
    int grade = 0;

    // Constructor initializing name and grade
    Student(string n, int g) : name(n), grade(g) {};
};

// Template function that accepts any smart pointer type (unique_ptr or shared_ptr)
// and prints the student's data
template <typename T>
void PrintStudent(T s){
    cout << "Student : " << s -> name <<" grade: " << s -> grade << '\n';
}

int main(){
    // Create a unique_ptr to a Student object
    auto s = make_unique<Student>("Serhii", 4);

    // Transfer ownership of the unique_ptr into the function
    PrintStudent(std::move(s));

    // After std::move, 's' becomes nullptr because ownership was transferred
    if (s == nullptr) cout << "s is empty!\n";

    // Create a shared_ptr to a Student object
    auto s2 = make_shared<Student>("Yliia",6);

    // Before copying, reference count is 1
    cout << "Reference Student before share: " << s2.use_count() << '\n';

    // Copy shared_ptr twice — reference count increases
    auto cps1 = s2;
    auto cps2 = s2;

    // Now three shared_ptr instances point to the same Student
    cout << "Reference Student: " << s2.use_count() << '\n';

    // Reset one shared_ptr — reference count decreases by 1
    cps1.reset();

    cout << "Reference Student after reset: " << s2.use_count() << '\n';

    // Passing shared_ptr with std::move — this transfers one reference,
    // but shared_ptr still allows copying, so it's optional
    PrintStudent(std::move(s2));

    return 0;
}
