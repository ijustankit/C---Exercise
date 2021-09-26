// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr1[3], arr2[3], arr3[2];
//     int alice = 0, bob = 0;
//     for (int i = 0; i < 3; i++)
//         cin >> arr1[i];
//     for (int i = 0; i < 3; i++)
//         cin >> arr2[i];
//     for (int i = 0; i < 3; i++)
//     {
//         if (arr1[i] > arr2[i])
//             alice++;
//         else if (arr1[i] < arr2[i])
//             bob++;
//     }
//     arr3[0] = alice;
//     arr3[1] = bob;
//     // cout << arr3[0] << " " << arr3[1];
//     for (int i = 0; i < 2; i++)
//         cout << arr3[i] << " ";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5]{};
//     for (int i = 0; i < 3; i++)
//         cout << arr[i] << " ";
//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 100, 40, 50, 500, 8};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int res = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         res = max(res, arr[i]);
//     }
//     cout << res;

//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     unsigned long long int x = 23005;
//     int count = 0;
//     while (x)                //returns true for non zero value
//     {
//         x = x / 10;
//         count++;
//     }
//     cout << count;

//     return 0;
// }

// #include <iostream>                //sorting
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int arr[]{2, 98, 45, 67, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     sort(arr, arr + n);
//     for (auto x : arr)
//         cout << x << " ";
//     return 0;
// }

//decimal to binary
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int number;
//     vector<int> v;
//     int i = 0;
//     cout << "input number = ";
//     cin >> number;
//     while (number != 0)
//     {
//         //int b = number % 2;
//         v.push_back(number % 2);
//         number = number / 2;
//         i++;
//         // v.push_back(b);
//     }

//     for (int i = v.size() - 1; i >= 0; i--)            //for reversing anything
//     {

//         cout << v[i];
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     int total = 10;
//     cout << "number = ";
//     cin >> number;
//     if (number > total)
//     {
//         cout << "invalid output";
//     }
//     else
//     {
//         int left = total - number;
//         cout << "number of candies sold " << number << endl;
//         cout << "number of candies available " << left;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int arr[9];
//     for (int i = 0; i < 9; i++)
//         cin >> arr[i];
//     int avg1 = (arr[0] + arr[3] + arr[6]) / 3;
//     int avg2 = (arr[1] + arr[4] + arr[7]) / 3;
//     int avg3 = (arr[2] + arr[5] + arr[8]) / 3;
//     cout << avg1 << " " << avg2 << " " << avg3 << endl;
//     if ((avg1 > avg2) || (avg1 > avg3))
//         cout << "player 1 is winner with oxygen level " << avg1 << endl;
//     if ((avg2 > avg1) || (avg2 > avg3))
//         cout << "player 2 is winner with oxygen level " << avg2 << endl;
//     if ((avg3 > avg1) || (avg3 > avg2))
//     {
//         cout << "player 3 is winner with oxygen level " << avg3 << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int weight;
//     cout << "input weight = ";
//     cin >> weight;
//     if ((weight > 0) && (weight < 7000))
//     {
//         if (weight > 0 && weight <= 2000)
//             cout << "25 minutes";
//         else if (weight > 2000 && weight <= 4000)
//             cout << "35 minutes";
//         else if (weight > 4000)
//             cout << "45 minutes";
//     }
//     else
//     {
//         cout << "invalid output";
//     }
//     return 0;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;
// int main()
// {
//     string text = "ATTACKATonce";
//     string result = "";
//     int s = 4;
//     for (int i = 0; i < text.length(); i++)
//         if (isupper(text[i]))
//             result += char(int(text[i] + s - 65) % 26 + 65);
//         else
//             result += char(int(text[i] + s - 97) % 26 + 97);
//     cout << result;
// }

// #include <iostream>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string number;
//     cout << "Enter number =";
//     cin >> number;
//     for (int i = number.length() - 1; i >= 0; i--)
//         cout << number[i];
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     int number;
//     cin >> number;
//     vector<int> v{1};
//     for (int i = 1; i <= 1000; i++)

//     {
//         if ((number > 0) && (number <= 1000))
//         {
//             if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0))
//             {
//                 v.push_back(i);
//             }
//         }
//     }
//     for (int i = 0; i < 30; i++)
//         cout << v[i] << " ";
//     cout << endl
//          << v[number - 1];
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     int arr[1000]{1};
//     for (int i = 1; i <= 1000; i++)
//     {
//         int count = 1;
//         if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0))
//         {
//             arr[count] = i;
//         }
//         count++;
//     }
//     for (int i = 0; i < 20; i++)
//         cout << arr[i] << " ";
//     cout << endl
//          << arr[number];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void factorial(int a)
// {
// }

// int main()
// {
//     int n, result = 1;
//     cout << "enter n : ";
//     cin >> n;
//     int z = n;
//     for (int i = 0; i < z; i++) //here the n are modified by two statements i<n  and n = n -1;
//     {
//         result = result * n;
//         n = n - 1;
//     }
//     cout << result;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void factorial(int a)
// {
// }

// int main()
// {
//     int n, result = 1;
//     cout << "enter n : ";
//     cin >> n;
//     while (n > 0)
//     {
//         result = result * n;
//         n = n - 1;
//     }

//     cout << result;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void fibb(int &n)
// {
//     vector<int> v = {0, 1};
//     int a = 0, b = 1;
//     for (int i = 0; i < n; i++)
//     {
//         int result = a + b;
//         a = b;
//         b = result;
//         v.push_back(result);
//     }
//     cout << v[n - 1];
//     //for (auto x : v)
//     //  cout << x << " ";
// }

// int main()
// {
//     int n;
//     cout << " n : ";
//     cin >> n;
//     fibb(n);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

// vector<int>v{0,1};
// int result,n;
// cout<<"enter n: ";
// cin>>n;
// int a = 0;
// int b =1;
// for(int i =0;i<n;i++)
// {
//     result = a+b;
//     a = b;
//     b = result;
//     v.push_back(result);
// }
// for(int i =0;i<n;i++)
// {
//     cout<<v[]<<" ";
// }
// return 0;
// }

// number return
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n,r;
//     int result = 0;
//     cout<<"type n : ";
//     cin>>n;
//     while (n>0)
//     {
//        r = n%10;  //returns last digit
//        result = result*10+r;   //
//        n = n/10;
//     }
//     cout<<result;
//     return 0;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char c = '*';
//     for(int j=0;j<5;j++)
//     {
//     for(int i =0;i<5;i++)
//         cout<<c<<" ";
//     cout<<endl;
// }

// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for(int i=1;i<=5;i++)
//     {
//         for(int j =1;j<=i;j++)
//             cout<<'*';
//         cout<<endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for(int i=5;i>=1;i--)
//     {
//         for(int j =1;j<=i;j++)
//             cout<<'*';
//         cout<<endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 5; j >= i; j--)
//             cout << j;
//         cout << endl;
//         j--;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = i; j >= 1; j--)
//         {cout<<j<<" ";}
//     cout<<endl;
//     }

//     return 0;
// }

// 54321 4321 321 21 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int j = 5; j >= 1; j--)
//     {
//         for (int i = j; i >= 1; i--)
//             cout << i << " ";
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int j =1;j<=5;j++)
//     {
//         for (int i = j;i>=1;i--)
//             cout <<i<< " ";
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int j = 5;j>=1;j--)
//     {
//         for (int i = j;i>=1;i--)
//             cout <<j<< " ";
//         cout << endl;
//     }
//     return 0;
// }

// 55555
// 4444
// 333
// 22
// 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int j = 1;j<=5;j++)
//     {
//         for (int i = j;i<=5;i++)
//             cout <<j<< " ";
//         cout << endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// for(int i =1;i<=5;i++)
// {
// for(int j=i;j<=4;j++)
// 	cout<<" ";
// {
// for(int k=1;k<=i;k++)
//     cout<<'*';
// }
// cout<<endl;
// }

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int j = 1; j <= (n*2);)
//     {
//         for (int i = 1; i <=j;i++)
//         {
//             cout << '*';
//             // i = i + 2;
//         }
//         j = j+2;
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int z;
//     int result = 0;
//     cout << "type n : ";
//     cin >> n;
//     while (n > 0)
//     {
//         z = n % 10;
//         result = result + z;
//         n = n/10;

//     }
//     cout<<result;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;  //123
//     int r;
//     int result = 0;
//     cout << "type n : ";
//     cin >> n;
//     while (n > 0)
//     {
//         r = n % 10; //1
//         result = result*10 + r; //321
//         n = n/10;  //0

//     }
//     cout<<result<<" ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     int result = 0;
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//             v.push_back(i);
//     }
//     for (auto x : v)
//     {
//         cout << x << " ";
//         result += x;
//     }
//     cout << endl
//          << result;
//     return 0;
// }

//checking of palindrome
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,r;
//     int result = 0;
//     cout<<"type n :";
//     cin>>n;
//     int z = n;
//     while(n>0)
//     {
//         r = n%10;
//         result = result*10+r;
//         n = n/10;
//     }
//     if(result ==z )
//         cout<<"yes";
//     else
//     {
//         cout<<"nopes";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int flag =0;
//     int n;
//     cout<<"type n: ";
//     cin>>n;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if(flag ==1)
//         cout<<"not prime";
//     else
//         cout<<"prime";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int fact(int n)
// {
//     int a = 1;
//     while (n > 0)
//     {
//         a = a * n;
//         n--;
//     }
//     return a;
// }

// int main()
// {

//     int n;
//     int result = 0;
//     cout << "print n : ";
//     cin >> n;
//     int temp = n;
//     while (n > 0)
//     {
//         int r = n % 10;
//         result = result + fact(r);
//         n = n / 10;
//     }
//     if (result == temp)
//         cout << "yes";
//     else
//         cout << "no";
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"n:";
//     cin>>n;
//     cout<<pow(n,3);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N = 8;
//     vector<int> v{2, 3, 4, 5, 6, 7,8};
//     vector<int> resultVector;

//     // cout<<resultVector.size();
//     int fix = 0;
//     while (fix <= resultVector.size() - 1)
//     {
//         for (int k = 0; v.size(); k++)
//         {
//             if (v[fix] + v[k] == N)
//             {
//                 resultVector.push_back(v[fix]);
//                 resultVector.push_back(v[k]);
//                 cout << v[fix] << " ";
//                 cout << v[k]<<" ";
//             }
//         }
//         fix++;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s = "tinkka";
//     char fix;
//     int f = 0;
//     int flag = 0;

//     while (f < s.length())
//     {

//         for (int i = 0; i < s.length(); i++)
//         {
//             fix = s[f];
//             if (fix == s[i])
//                 flag++;
//         }
//         f++;
//         if (flag > 1)
//             cout << s[f];
//         else
//             continue;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     vector<int> v;
//     vector<int> result;
//     cout << "type n : ";
//     cin >> N;
    
//     for (int i = 0; i < N;i++)
//     {
//         int k;
//         cin >> k;
//         v.push_back(k);
        
//     }
// sort(v.begin(), v.end(), greater<int>());
    
//     {
//         int j = v[0] * v[1] * v[2] * v[3];
//         cout << "max quadruplets sum : " << j;

//     }

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// int change(int p, int b = 8 )
// {
//     p = p+b;
//     return p;
// }

// int main()
// {
//     int a = 102;
//     int b = 3;
//     int k = change(a);
//     cout<<k;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;


// int main()
// {
//     vector<int>item_number{101,102,103,104};
//     vector<string>item_name{"milk","cheese","ghee","bread"};
//     vector<int>price{42,50,500,40};
//     vector<int>stock{10,20,15,16};
//     int serial_number,quantity,temp;
//     cout << "serial number : ";
//     cin >> serial_number;
//     cout << "quantity: ";
//     cin >> quantity;

//     for (int i = 0; i < item_name.size();i++)
//     {
//         if(item_number[i]==serial_number)
//         {
//             temp = i;
//         }
//     }

//     if(stock[temp]>=quantity)
//     {
//         float total = static_cast<float> (price[temp] * quantity);
//         cout << fixed << setprecision(1) << total << " Rs." << endl;
//         cout << stock[temp] - quantity << " items left." << endl;
//     }
//     else{
//         cout << "NO stock"<<endl<<stock[temp]<<" left";

//     }
//         return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int number;
//     cout << "type : ";
//     cin >> number;

//     if(number<=200 && number>=100)
//     {

//         if(number%4==0)
//     {
        
//         {
//             cout <<"group a : "<< number / 4<<endl;
//             cout <<"group b : "<< number / 4<<endl;
//             cout <<"group c : "<< number / 4<<endl;
//             cout <<"group d : "<< number / 4<<endl;
//         }
//     }
//     else{
//         int extra = number % 4;
//         cout <<"group a : "<< number / 4<<endl;
//         cout <<"group b : "<< number / 4<<endl;
//         cout <<"group c : "<< number / 4<<endl;
//         cout <<"group d : "<<(number / 4) + extra <<endl;


//     }


//     }
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,a = 0;
//     vector<int> v{2,5,5,4,2,4,5,5};
//     map<int, int> m;

//     for(auto x:v)
//     {
//         m[x]++;
//     }

//     for(auto x : m)
//     {
//         if(x.second%2==0)
//         {
//             a++;
//         }
//     }

//     if(a>0)
//     {
//         cout << a;
//     }

//     else{
//         cout << -1;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
}