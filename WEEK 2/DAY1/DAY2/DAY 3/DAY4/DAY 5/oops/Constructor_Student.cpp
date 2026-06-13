

#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s(101, "Rahul");
    s.display();

    return 0;
}