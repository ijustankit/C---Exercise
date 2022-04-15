// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str = "ankit";
//     for (int i = str.length() - 1; i >= 0; i--)
//     {
//         cout << str[i];
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<char> v = {'a', 'n', 'k', 'i', 't'};
//     for (int i = v.size() - 1; i >= 0; i--)
//     {

//         cout << v[i];
//     }
//     cout<<endl << v.size();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[10] = {654, 84, 68, 686, 44, 1354, 351, 681, 3, 51};
//     int max = arr[0];
//     int number = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < number; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     cout << max;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class ankit
// {
// public:
//     int x;
//     int y;
// };

// int main()
// {
//     ankit p = {10,20};
//     //p.x = 10;
//     cout << p.y;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class ankit
// {
// private:
//     int real;
//     int imag;
// public:
// void print()
// {
//     cout<<real<<"+i"<<imag<<endl;

// }
// ankit(int r,int i)
// {
//     real =r;
//     imag =i;
// }
// };

// int main()
// {
//     ankit c1(10,15);
//     c1 print();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "type n : ";
//     cin >> n;
//     if (n % 4 == 0)
//     {
//         if (n % 100 == 0)
//         {
//             if (n % 400 == 0)
//             {
//                 cout << "leap year";
//                 else cout << "not";
//             }
//             else
//                 cout << "leap year";
//         }
//         else
//             cout << "not";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int year;

//     cout << "Enter a year: ";
//     cin >> year;

//     if (year % 4 == 0)
//     {
//         if (year % 100 == 0)
//         {
//             if (year % 400 == 0)
//                 cout << year << " is a leap year.";
//             else
//                 cout << year << " is not a leap year.";
//         }
//         else
//             cout << year << " is a leap year.";
//     }
//     else
//         cout << year << " is not a leap year.";

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     char c;
//     cout << "type string: ";
//     cin >> str;
//     cout << "type char c: ";
//     cin >> c;
//     int flag = 0;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == c)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     // cout << flag;
//     if (flag == 1)
//         cout << "Present";
//     else
//         cout << "not present";

//     return 0;
// }

// #include <bits/stdc++.h>
// // #include<cstring>
// // #include<algorithm>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "type : ";
//     cin >> str;
//     transform(str.begin(),str.end(), str.begin(), ::toupper);
//     cout << str;
//     return 0;
// }
// #include <bits/stdc++.h>
// // #include<cstring>
// // #include<algorithm>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "type : ";
//     cin >> str;
//     transform(str.begin(),str.end(), str.begin(), ::tolower);
//     cout << str;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "type : ";
//     cin >> str;
//     // sort(str.begin(),str.end(), greater<int>());
//     // sort(str.begin(),str.end());
//     cout << str;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int fact(int n)
// {
//     if(n==0)
//         return 1;
//     int smalloutput = fact(n-1);
//     return n*smalloutput;
// }

// int main()
// {
//     cout<<fact(5);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     map<int, string> m;
//     m[1] = "yo";
//     m[3] = "yess";
//     m[8] = "kyu";

//     // for (auto x : m)
//     //     cout << x.first << " " << x.second << endl;
//     for (int i = 0; i < m.size(); i++)
//         cout << m[8] << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"n: ";cin>>n;
//     vector<int>v;
//     while(n>0)
//     {
//         int r = n%2;
//         n = n/2;
//         v.push_back(r);
//     }
//     for(int i = v.size()-1;i>=0;i--)
//         cout<<v[i];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, i = 0;
//     cout << "n: ";
//     cin >> n;
//     int arr[500]{};
//     while (n > 0)
//     {
//         int r = n % 2;
//         n = n / 2;
//         arr[i] = r;
//         i++;
//         cout << i << " ";
//     }
//     int num = sizeof(arr) / sizeof(arr[0]);
//     for (int j = i; j >= 0; j--)
//         cout << arr[j];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 7; i+=2)           //for incrementing by 2 use i+=2
//     {
//         for (int j = 1; j <= i; j++)
//             cout << i;
//         cout << endl;
//     }
// }

// #include <bits/stdc++.h> //insert //erase //empty
// using namespace std;
// int main()
// {
//     vector<int> v(10, 1);
//     cout << sizeof(v) << " ";
//     cout << v.size();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *p)
// {
//     p = p + 1;
//     cout<<*p;
// }

// int main()
// {
//     int i = 10;
//     int *p = &i;
//     fun(p);
//     cout << *p;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     vector<int>::iterator it = v.begin();
//     // for (auto it = v.rbegin(); it != v.rend(); it--)
//     it += 3;
//     cout << (*it) << " ";
//     cout << v.max_size() << " ";

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 10;
//     int *i = &n;
//     i++;
//     cout<<*i;

//     // cout << *i;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[10]{5,6,4,7,8,91,2,3,5};
//     cout<<3[arr];
//     return 0;

// }

// #include <bits/stdc++.h>
// using namespace std;
// void PrimeTill(int N)
// {
//     int flag;
//     vector<int> v;
//     vector<int> resultVector;
//     for (int j = 2; j < N; j++)
//     {
//         flag = 0;
//         for (int i = 2; i < j; i++)
//         {
//             if (j % i == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag == 1)
//         {
//             continue;
//         }
//         else
//         {
//             v.push_back(j);
//         }
//     }
//     int fix = 0;
//     while (fix <= resultVector.size())
//     {
//         for (int k = 0; v.size(); k++)
//         {
//             if (v[fix] + v[k] == N)
//             {
//                 resultVector.push_back(v[fix]);
//                 resultVector.push_back(v[k]);
//             }

//         }
//         fix++;
//     }
//     cout<<resultVector[0]<<" ";
//     cout<<resultVector[1]<<" ";
// }

// int main()
// {
//     int N;
//     cout << "Enter N: ";
//     cin >> N;

//     PrimeTill(N);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class Result
// {
// public:
//     int roll_number;
//     string subject;
//     bool flag = false;

//     void setmarks(int a, int password)
//     {

//         if (password != 123123)
//         {
//             cout << "wrong password" << endl;
//             return;
//         }
//         if (a > 500)
//         {
//             cout << "marks should be less than or equal to 500" << endl;
//             return;
//         }
//         marks = a;
//         cout << "marks set successfully" << endl;
//         flag = true;
//     }

//     int getmarks()
//     {
//         return marks;
//     }

//     void display()
//     {
//         if (flag)
//         cout << "roll_number : " << roll_number  << endl<< "subject : " << subject << endl << "marks : " << marks << endl;
//     }

// private:
//     int marks;
// };
// int main()
// {
//     int marks, password;
//     cout << "marks : ";
//     cin >> marks;
//     cout << "password : ";
//     cin >> password;

//     Result ankit;
//     ankit.roll_number = 1613810050;
//     ankit.subject = "science";
//     ankit.setmarks(marks, password);
//     ankit.display();
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float a = 19856.992;
//     cout<<a;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void max_of_four(int a, int b, int c, int d)
// {
//     int result;
//     if (a > b && a > c && a > d)
//     {
//         cout << 1<<endl;
//         result = a;
//     }
//     else if (b > a && b > c && b > d)
//     {
//         cout << 2<<endl;
//         result = b;
//     }
//     else if (c > a && c > b && c > d)
//     {
//         cout << 3<<endl;
//         result = c;
//     }
//     else if (d > a && d > b && d > c)
//     {
//         cout << 4<<endl;
//         result = d;
//     }
//     cout<<result;
// }
// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */

// int main()
// {
//     // int a, b, c, d;
//     // cin >> a >> b >> c >> d;
//     max_of_four(6,14,9,10);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,q;
//     cin>>n,q;
//     vector<int>v;
//     vector<int>v2;
//     for(int i=0; i<n;i++)
//         {cin>>v[i];
//             for(int j = 0;i<v[i];j++)
//                 cin>>v2[j];
//         }
//     for(int i = 0;i<q;i++)
//     {
//         cout<<v[i][j]
//     }

//     return 0;
// }

// trying to make derived class

// #include <bits/stdc++.h>
// using namespace std;
// class Ankit
// {
// public:
//     int x;
//     int y;

//     void type()
//     {
//         cout << "hurrayy";
//     }
// };

// class Arvind : public Ankit
// {
// public:
//     string school = "svm";
// };

// int main()
// {
//     Arvind a;
//     a.x = 10;
//     cout << a.x << " " << a.school <<endl;
//     a.type();
//     return 0;
// }

// count the number if vowels

// #include<bits/stdc++.h>
// using namespace std;
// int countVowels(string &str)
// {
//     int i = 0;
//     int count = 0;
//     while ( str[i]!='\0')
//     {
//         if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
//             count++;
//         i++;

//     }
//     return count;

// }
// int main()
// {

//     string str;
//     cin>>str;
//     cout<<countVowels(str);
//     return 0;
// }

// check if the string is palindrome or not

// #include<bits/stdc++.h>
// using namespace std;
// string PalindromeCheck(string &str)
// {

//     string temp = str;
//     reverse(str.begin(),str.end());
//     if(temp == str)
//         return "Palindrome";

//     return "Not palindrome";

// }

// int main()
// {
//     string str;
//     cin >> str;
//     cout<<PalindromeCheck(str);
//     return 0;
// }

// palindrome 2nd way

// #include <bits/stdc++.h>
// using namespace std;
// string PalindromeCheck(string str)
// {
//     for (int i = 0; i < str.length() / 2; i++)
//     {

//         if (str[i] != str[(str.length() - 1) - i])
//             return "NO";

//     }
//     return "Yes";
// }

// int main()
// {
//     string str;
//     cout<<"Enter the Name: ";
//     cin >> str;
//     cout << PalindromeCheck(str);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class gfg
// {
// public:
//     vector<int> v;

//     void insert(int number)
//     {
//         v.push_back(number);
//     }

//     void display()
//     {
//         for (auto x : v)
//         {
//             cout << x << " ";
//         }
//     }

//     // void search(int number)
//     // {

//     //     bool flag = false;
//     //     for (int i = 0; i < v.size(); i++)
//     //     {
//     //         if (number == v[i])
//     //             flag = true;

//     //     }
//     //     if(flag)
//     //         cout<<"yes";
//     //     else
//     //         cout<<"no";
//     // }

//     string search(int number)              //i always forget ki jab return use hota hai to cout likhte hain bagal me.
//     {

//         cout<<endl;
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (number == v[i])
//                 return "Yes";
//         }

//         return "NO";
//     }

//     void Delete(int number)
//     {

//     }
// };

// int main()
// {
//     gfg s1;
//     s1.insert(24);
//     s1.insert(20);
//     s1.insert(44);
//     cout<< s1.search(24);
//     cout<< s1.search(20);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void insert(int number,vector<int>&v)
// {
//     v[number]=1;
// }

// void search(int number)
// {
//     if(v[number]!=0)
//         cout<<"Not Present";
//     else
//         cout<<"Present";
// }

// int main()
// {
//     vector<int>v(100,0);

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void checkSubset(vector<int>v1, vector<int>v2)
// {
//     int count =0;
//     for(int i = 0;i<v2.size();i++)
//     {
//         for(int j =0;j<v1.size();j++)
//         {
//             if(v1[j]==v2[i])
//                 count++;
//         }
//     }
//     if (count==v1.size())
//         cout<<"Y";
//     else
//         cout<<"N";

// }

// int main()
// {
//     vector<int>v1{1,4};
//     vector<int>v2{1,3,4,7,8};
//     checkSubset(v1,v2);
//     return 0;
// }

// testing

// #include <bits/stdc++.h>
// using namespace std;
// class box
// {
//     int l, b, h;

// public:
//     box()
//     {
//         l = 0;
//         b = 0;
//         h = 0;
//     }
//     box(int length, int breadth, int height)
//     {
//         l = length;
//         b = breadth;
//         h = height;
//     }

//     int getLength()
//     {
//         return l;
//     }
//     int getBreadth()
//     {
//         return b;
//     }

//     int getHeight()
//     {
//         return h;
//     }

//     long long CalculateVolume()
//     {
//         return l * b * h;
//     }

//     friend bool operator < (box &A, box &B)
//     {
//         if((A.l<B.l)||((A.b<B.b)&&(A.l==B.l))||((A.h<B.h)&&(A.b==B.b)&&(A.l==B.l)))
//             return true;
//         return false;
//     }

//     friend ostream& operator << (ostream& output,const box & A)
//     {
//         output <<A.l<<" "<<A.b<<" "<<A.h;
//         return output;
//     }

// };
// int main()
// {

//     box b(2, 4, 8);
//     cout << b.getLength();
//     cout << b.getBreadth();
//     cout << b.getHeight() << endl;
//     cout << b.CalculateVolume();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class testing
// {

//     string str = "ankit";
//     string a = " ambush";

// public:
//     string name()
//     {
//         stringstream return;
//     }
// };

// int main()
// {
//     // testing t1;

//     // stringstream ss;

//     // int a;
//     // cout<<"print a :";
//     // cin>>a;
//     // string str = "ankit";
//     // string str1 = "aaaankit";
//     // ss<<str;
//     // ss<<a;
//     // ss<<str1;
//     // cout<<ss.str();

//     // stringstream ss;
//     // ss << "stringstream";
//     // cout << ss.str();

//     // cout << t1.name();
//     // cout << endl
//     //      << "hey";

//     // string str = "Simple Questions To Check Your Software Testing Basic Knowledge";

//     // stringstream s(str);
//     // string word;

//     // int count = 0;
//     // while (s >> word)
//     //     count++;

//     // cout << " Number of words in given string are: " << count;
//     // cout<<str;

//     string str = "ankti is an exellent boy he is an exellent boy from the start";
//     map<string, int> m;

//     stringstream ss(str);
//     string word;
//     int count = 0;
//     while (ss >> word)
//     {
//         m[word]++;
//     }

//     for (auto x : m)
//     {
//         cout << x.first << " " << x.second << endl;
//     }

//     return 0;
// }

// method 1 : easiest
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5] = {5,4,3,2,1};
//     int size= sizeof(arr)/sizeof(arr[0]);
//     for(int i=size-1;i>=0;i--)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// method 2
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5] = {5,4,3,2,1};
//     int size= sizeof(arr)/sizeof(arr[0]);

//     for(int i = size-1;i>=0;i--)
//     {
//         int *ptr = &arr[i];
//         cout<<*ptr<<endl;
//     }
//     return 0;
// }

// method 3
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[5] = {5,4,3,2,1};
//     int size= sizeof(arr)/sizeof(arr[0]);       //getting size of array
//     int *ptr = &arr[4];                         // assigning 4th index element to array

//     for(int i=0;i<size;i++)
//     {
//         cout<<*ptr<<endl;    //dereferencing the pointer
//         ptr--;
//         // it means (ptr = ptr - 1)
//         //i.e. (address of index 4 element - 1*4 bytes(integer))
//     }
//     return 0;
// }

// your code modification
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int i,arr[5]={5,4,3,2,1};
//      int *ptr = &arr[4];        //u didnt assign

//     for(i=0;i<=4;i++)
//     {
//         printf("%d\n",*ptr);           // forgot to dereference
//         ptr--;                         // decrement
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class testclass{
// public:

//     int x = 66;

// };

// int main()
// {
//     testclass object1;
//     cout<< object1.x<<endl;
//     object1.x = 70;
//     cout<< object1.x<<endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void gcd(int m, int n)
// {
//     cout << m << " " << n;
//     return;
// }
// int main()
// {
//     long long int a = 21474836471;
//     long long int b = 2147483647;
//     gcd(a, b);
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, arr[n];
//     cout << "input number of elements and array";
//     cin >> n;
//     for (int t = 0; t < n; t++)
//         cin >> arr[t];
//     for (int i = 0; i < n; i++)
//     {
//         int counter = 0;

//         int j = i - 1, k = i - 1, l = i - 1;
//         for (j = 0; j < i; j++)
//         {
//             for (k = 0; k < i; k++)
//             {
//                 for (l = 0; l < i; l++)
//                 {
//                     if ((arr[j] + arr[k] + arr[l]) == arr[i])
//                     {
//                         counter++;
//                         break;
//                     }
//                 }
//             }
//         }
//         if (counter > 0)
//             cout << ("yes") << endl;
//         else
//             cout << ("no") << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     int arr[100000];
//     int z=0;

//     cout << "Enter the total number of Elements/ N : ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int j = 0; j < n; j++)
//     {
//         int counter = 0;
//         for (int k = 0; k < j; k++)
//         {
//             for (int l = 0; l < j; l++)
//             {
//                 for (int m = 0; m < j; m++)
//                 {
//                     if (arr[k] + arr[l] + arr[m] == arr[j])
//                     {

//                         counter++;
//                         break;
//                     }
//                 }
//             }
//         }
//         if(counter>0)
//         {
//             z++;
//         }
//     }
//     cout << z;

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 31;
//     while(a>26)
//     {
//         a = a % 26;
//     }

//     cout<<char(64+a);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int sum = 0;
    for (int i = 0; i < 100;i++)
    {
        
        sum = sum + i;
        
    }
    cout << sum << endl;
        return 0;
}