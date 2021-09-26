
// #include <bits/stdc++.h>
// using namespace std;
// void nextpalindrome(int &num)
// {
//     int remainder, sum = 0;
//     bool flag = false;
//     int temp = num;
//     if (num / 10 == 0)
//     {
//         cout << num+1;
//     }

//     else
//     {
//         while (flag != true)
//         {
//             num = temp;
//             sum = 0;

//             while (num > 0)
//             {
//                 remainder = num % 10;
//                 sum = sum * 10 + remainder;
//                 num = num / 10;
//             }

//             if (sum == temp)
//             {
//                 cout << temp;
//                 flag = true;
//             }

//             else
//             {
//                 temp++;
//             }
//         }
//     }
// }

// int main()
// {
//     int n = 51;
//     cout << "type : ";
//     cin >> n;
//     nextpalindrome(n);
//     return 0;
// }