

// int arr[5] = {5, 4, 78, 99, 8}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {5, 4, 78, 99, 8};
//     cout << arr[0] << " " << arr[3];
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];                      //do not initialize with values
//     cout << arr[0] << " " << arr[3]; //generates random values
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {}; //used only this {} then it will return 0 as default values
//     cout << arr[0] << " " << arr[3];
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[2]{10, 20};
//     int arr2[6]{10, 20};

//     cout << arr1[0] << " " << arr1[1] << " ";

//     cout << arr2[0] << " " << arr2[1] << " " << arr2[2]; //allowed hai jaagh to zero ayga wahan arr2[2] me

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5]{0};
//     cout << sizeof(arr);
//     return 0; //itt will return 20 ...... 5 elements * 4(size of int)
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char arr[5]{0};
//     cout << sizeof(arr);
//     return 0; //itt w   ill return 5 ...... 5 elements * 1(size of char)
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30, 40, 78};

//     cout << sizeof(arr) / sizeof(arr[0]); //20/4 = 5

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 30, 40};

//     int number = sizeof(arr) / sizeof(arr[0]); // returns how many elemnts are there
//     for (int i = 0; i < number; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// VECTORS

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v; //defining vector
//     v.push_back(10);
//     v.push_back(30);
//     v.push_back(20);
//     for (int i = 0; i < v.size(); i++)
//     {                        //same for loop as array but we use v.size() which is best thing.
//         cout << v[i] << " "; //using v[i] here in array we use arr[i]
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v; //defining vector
//     v.push_back(10);
//     v.push_back(30);
//     v.push_back(20);
//     for (auto x : v) //its called FOR EACH loop.its with auto here gets int as declared,can be replaced by int also.
//     {               // x here is not index because it gets value of vector. i can also be used.
//         cout << x << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n = 10;
//     vector<int> v(n, 5); //NOTE ROUND BRACES ARE USED I HERE. //can initiate like this also. n is number of elements and next 5 is gonna repeat.
//     for (auto x : v)
//     {

//         cout << x << " ";
//     }
//     return 0;
// }

//just creating int vector

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> v{10, 20, 30, 40, 50}; //declaration is kind of same as array..creates vector of 5 items(all are int)

//     for (auto x : v)
//         cout << x << " ";

//     return 0;
// }

// // showing example of char vector same goes for float double etc
// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<char> v{'1', '2', '3', '4', '5'}; //all are characters

//     for (auto x : v)
//         cout << x << " ";

//     return 0;
// }

//finding the maximum number in the array :craeted by me ;)

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int arr[]{10, 20, 34, 24, 534, 5765, 4, 2345, 245, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int root = arr[0];
//     for (int i = 1; i < n; i++)
//     {

//         if (arr[i] > root)
//         {
//             root = arr[i];
//         }
//         continue; //optional
//     }
//     cout << root;
//     return 0;
// }

//Solution provided by gfg using built in max function

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 100, 40, 50, 500, 8};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int res = arr[0];

//     for (int i = 1; i < n; i++)
//         res = max(res, arr[i]); //built in max function

//     cout << res;

//     return 0;
// }

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 100, 40, 50, 500, 8};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int res = *max_element(arr, arr + n); //look closely function to get maximum from entire array.

//     cout << res;                      // for *max_element we need to use #include<algorithm> as its an built in function from lib

//     return 0;
// }

//finding maximum in vector

// #include <iostream>
// #include <algorithm> //keep an eye on this shit here
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> v{12, 43, 4, 234, 34, 12, 414, 14, 57, 87, 58, 9789}; // declaratin of a vector
//     int result = *max_element(v.begin(), v.end());                    //using start & v.end() which is special & return beyond
//     cout << result;                                                   //....the last value. same does arr+n in arrays
//     return 0;
// }

//sum of array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[]{10, 20, 30, 40, 50};
//     int elements = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;
//     for (int i = 0; i < elements; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << sum;
//     return 0;
// }

//sum using function
// #include <iostream>
// #include <numeric> //this library is necessary

// using namespace std;

// int main()
// {
//     int arr[] = {10, 20, 5, 40};
//     int elements = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;                                      //initialize
//     int total = accumulate(arr, arr + elements, sum); //sum k equal me hai ya new var(total) b create kr skte.
//     cout << total;
//     return 0;
// }

//for vectors same logic
// #include <iostream>
// #include <numeric> //keep an eye on this shit here
// #include <vector>

// using namespace std;

// int main()
// {
//     vector<int> v{12, 43, 4, 234, 34, 12, 414, 14, 57, 87, 58, 9789}; // declare a vector
//     int sum = 0;
//     sum = accumulate(v.begin(), v.end(), sum); //yahan total number wala chochla nahi hai arrays jaise
//     cout << sum;
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

// #include <bits/stdc++.h>                //sorting
// using namespace std;
// int main()
// {
//     vector<int>v{2, 98, 45, 67, 15};
//     sort(v.begin(),v.end());
//     for (auto x : v)
//         cout << x << " ";
//     return 0;
// }




// #include <bits/stdc++.h>                //sorting in decending order.
// using namespace std;
// int main()
// {
//     vector<int>v{2, 98, 45, 67, 15};
//     sort(v.begin(),v.end(),greater<int>());
//     for (auto x : v)
//         cout << x << " ";
//     return 0;
// }



//PRACTICE: created a vector in which it doesnt stop taking input untill it gets an input as 0.
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int input;
//     vector<int> v;
//     cout << "Enter input = ";
//     bool a = true;
//     int i = 0;
//     while (a == true)
//     {
//         cin >> input;
//         if (input != 0)
//             v.push_back(input);
//         else
//         {
//             a = false;
//         }
//         i++;
//     }
//     for (i = 0; i < v.size(); i++)
//         cout << v[i] << " ";
//     return 0;
// }

//PRACTICE : PROBLEM BY HIMANSHU HACKERRANK COMPARE THE TRIPLETS
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int number1, number2;
//     int alice = 0;
//     int bob = 0;

//     vector<int> v1;
//     vector<int> v2;
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "input number v1= ";
//         cin >> number1;
//         v1.push_back(number1);
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "input number for v2 = ";
//         cin >> number2;
//         v2.push_back(number2);
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         if (v1[i] > v2[i])
//             alice += 1;
//         else if (v1[i] < v2[i])
//         {
//             bob += 1;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     for (auto x : v1)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
//     for (auto x : v2)
//     {
//         cout << x << " ";
//     }
//     cout << endl
//          << "Alice = " << alice << " "
//          << "bob = " << bob;
//     return 0;
// }

//MULTIDIMENSIONAL ARRAY

// #include <iostream>

// using namespace std;

// int main()
// {
//     int arr1[3][2] = {10, 20, 30, 40, 5, 6}; //same

//     int arr2[3][2] = {{10, 20}, //same
//                       {30, 40},
//                       {5, 6}};
//     cout << arr2[2][0];                        //2th(0,1,2) row ka 0th(first) element
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)    //for k andar for
//             cout << arr2[i][j] << " "; //ith row ka jth element
//     }

//     return 0;
// }
