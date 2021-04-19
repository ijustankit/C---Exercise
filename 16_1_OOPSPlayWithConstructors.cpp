#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
class student
{
public:
    int rollNO;

private:
    int marks;

public:
    void display()
    {
        cout << rollNO << " " << marks << endl;
    }

    student()
    {
        cout << "inside the constructor 1" << endl;
    }
    student(int a, int b)
    {
        cout << "inside the constructor 3 " << endl;
        rollNO = a;
        marks = b;
    }
    student(int a)
    {
        cout << "inside the constructor 2 " << endl;
        rollNO = a;
    }
    ~student()
    {
        cout << "destructor called." << endl;
    }
};

int main()
{
    student s1; //constructor 1

    student s2(105); //constructor 2

    student s3(141, 784); //constructor 3

    student s4(s3); // copy constructor ..nothing will print

    student s5; // //constructor 1
    s5 = s4;    // copy assignment operator no constructor

    student s6 = s5; //because copy assignment operator needs two objects who are alreaady created in memory. but here new object is being created so in background it treats it like student s6(s5). so copy constructor will be called.

    s6.display();
    return 0;
}