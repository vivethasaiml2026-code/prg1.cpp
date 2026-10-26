
#include <iostream>
#include <string>
using namespace std;

class student
{
    int rollno;
    string name;

public:
    student(int r, string n)
    {
        rollno = r;
        name = n;
        cout << "Student object created" << endl;
    }

    void display()
    {
        cout << "Roll number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }

    ~student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    student s1(101, "arun");
    s1.display();

    return 0;
}

