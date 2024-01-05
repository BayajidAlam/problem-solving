#include <iostream>
#include <string>

using namespace std;

struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    // Declare a Student object
    Student student;

    cin >> student.age >> student.first_name >> student.last_name >> student.standard;
    cout << student.age << " " << student.first_name << " " << student.last_name << " "<< student.standard;

    return 0;
}
