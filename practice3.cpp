// #include <bits/stdc++.h>
// using namespace std;

// class players
// {
// public:
//     static int count;

//     players()
//     {
//         count++;
//     }

//     ~players()
//     {
//         count--;
//     }
// };

// int players::count=0;
// int main()
// {
//     players p1;
//     cout << players::count << endl;
//     {
//         players p2;
//         cout << players::count << endl;
//     }
//     cout << players::count << endl;
//     return 0;
// }

// Circular Array Rotation
// John Watson knows of an operation called a right circular rotation on an array of integers. One rotation operation moves the last array element to the first position and shifts all remaining elements right one. To test the abilities of Sherlock , Watson provides Sherlock with an array of integers. Sherlock is to perform the rotation operation a number of times then determine the value of the element at a given position.

// For each array, perform a number of right circular rotations and return the values of the elements at the given indices.

// Example
// arr = [3,4,5]

// k = 2

// queries = [1,2]

// Here k is the number of rotations on arr, and queries holds the list of indices to report. First we perform the two rotations:

// [3,4,5] -> [5,3,4] -> [4,5,3]

// Now return the values from the zero-based indices 1 and 2 as indicated in the queries array.

// a[1]=5

// a[2] = 3

// Function Description
// Complete the code in the editor.

// The question has the following inputs:

// itn arr[]: the array to rotate

// int k: the rotation count

// int queries[1]: the indices to report Returns

// int[q]: the values in the rotated as requested in

// Input Format
// The first line contains space-separated integers, n, k and q, the number of elements in the integer array, the rotation count and the number of queries. The second line contains space-separated integers, where each integer i describes array element arr[i] (where 0<=i<n). Each of the q subsequent lines contains a single integer, queries[i], an index of an element in arr to return.

// Constraints
// 1<=n<=10^5
// Sample Input 0
// 3 2 3
// 1 2 3
// 0
// 1
// 2
// Sample Output 0
// 2

// 3

// 1

// Explanation 0
// After the first rotation, the array is [3,1,2].

// After the second (and final) rotation, the array is [2,3,1].

// We will call this final state array b=[2,3,1]. For each query, we just have to get the value of b[queries[i]].

// queries[0] = 0, b[0] = 2.
// queries[1] = 1, b[1] = 3.
// queries[2] = 2, b[2] = 1.

// #include<bits/stdc++.h>
// using namespace std;

// int rotateClockwise(int arr[],int n)
// {
//     int temp = arr[n - 1];
//     for (int i = n - 1; i >= 1;i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = temp;
//     return
// }

// int main()
// {

//     int n, k, q;
//     cout << "type :";
//     int arr[100000];

//     cin >> n >> k >> q;
//     for (int i = 0; i < n;i++) //added in array
//     {
//         cin >> arr[i];
//     }

//     rotateClockwise(arr);

//     return 0;
// }

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

// #include <bits/stdc++.h>
// using namespace std;
// void nextpalindrome(int &num)
// {
//     int remainder, sum = 0;
//     bool flag = false;
//     int temp = num;
//     while (flag != true)
//     {
//         num=temp;
//         sum=0;
//         while (num > 0)
//         {
//             remainder = num % 10;
//             sum = sum * 10 + remainder;
//             num = num / 10;
//         }

//         if (sum == temp)
//         {
//             cout << temp;
//             flag = true;
//         }

//         else
//         {
//             temp++;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "type : ";
//     cin >> n;
//     nextpalindrome(n);

//     return 0;
// }


// # include <bits/stdc++.h>
// using namespace std;
// int main() {
//     // your code here
//     int n,i,j;
//     double cp=0,cn=0,cz=0;
//     cout << "type : ";
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]<0){
//             cn++;
//         }
//         else if(arr[i]==0){
//             cz++;
//         }
//         else {
//             cp++;
//         }
//     }
//     double total=n;
//     cout<<fixed << setprecision(16)<<cp/total<<("\n");
//     cout<<fixed << setprecision(16)<<cn/total<<("\n");
//     cout<<fixed << setprecision(16)<<cz/total;
    
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;



int main()
{

    int n,count=0,temp;

    cout<<"how many students : ";
    cin >> n;
    vector<int> score;
    int total = 0;
    for (int i = 0; i < n;i++)
    {
        total = 0;
        for (int i = 0; i < 5;i++)
        {
            cin >> temp;
            total = total + temp;
        }
        score.push_back(total);
    }

    for(int i = 1;i<score.size();i++)
    {
        if(score[0]<score[i])
            count++;
        }
        cout << count;

        return 0;
}