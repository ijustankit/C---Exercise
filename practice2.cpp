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

