// #include <bits/stdc++.h>
// using namespace std;
// class fraction
// {
// private:
//     int numerator;
//     int denominator;

// public:
//     fraction(int numerator, int denominator)
//     {
//         this->numerator = numerator; //using this here means jo b object is function me judega ill search my numerator in that object
//         this->denominator = denominator;
//     }

//     void print()
//     {
//         // cout<<numerator <<"/"<<denominator<<endl;  //same
//         cout << this->numerator << "/" << this->denominator << endl; //same
//     }

// };

// int main()
// {

//     fraction f1(10, 9);
//     fraction f2(101, 49);
//     fraction f3(106, 95);
//     f1.print(); //here print function have this which stores the address of object f1. if we use print function here and either use numerator or this->numerator it will go and check the numerator in f1.
//     f2.print();
//     f3.print();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class fraction
// {
// private:
//     int numerator;
//     int denominator;

// public:
//     fraction(int numerator, int denominator)
//     {
//         this->numerator = numerator; //using this here means jo b object is function me judega ill search my numerator in that object
//         this->denominator = denominator;
//     }

//     void print()
//     {
//         // cout<<numerator <<"/"<<denominator<<endl;  //same
//         cout << this->numerator << "/" << this->denominator << endl; //same
//     }
//     void add(fraction f2)
//     {
//         int lcm = this->denominator * f2.denominator;
//         int x = (lcm / (this->denominator)) * this->numerator;
//         int y = (lcm / (f2.denominator)) * f2.numerator;
//         int num = x+y;
//         this->numerator = num;
//         this->denominator = lcm;
//         // cout << (x + y) / lcm;
//     }
// };

// int main()
// {

//     fraction f1(10, 5);
//     fraction f2(9, 4);
//     f1.add(f2);
//     f1.print();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class fraction
{
public:
    int numerator;
    int denominator;

    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void display()
    {
        cout << this->numerator << "/" << this->denominator << endl;
    }

    void simplify()
    {
        int hcf;
        int k = min(this->numerator, this->denominator);
        for (int i = 1; i <= k; i++)
        {
            if (this->numerator % i == 0 && this->denominator % i == 0)
                hcf = i;
        }
        this->numerator = this->numerator / hcf;
        this->denominator = this->denominator / hcf;
    }

    void add(fraction f2)
    {
        int lcm = this->denominator * f2.denominator;
        int x = lcm / (this->denominator) * this->numerator;
        int y = lcm / (f2.denominator) * f2.numerator;
        this->numerator = x + y;
        this->denominator = lcm;

        simplify();
    }
};

int main()
{
    fraction f1(10, 2);
    fraction f2(12, 4);
    f1.add(f2);
    f1.display();

    return 0;
}