//used for another name of the variable.. $ is used for this


// when you create a reference you must assign it.
// int x =10;
// int &y = x;     (correct)


// int &y;
// int x =10;
// x=y



// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     int &y = x; //nickname for x is y
//     cout << y << " ";         //10
//     x = x + 5; //15
//     cout << y << " "; //15
//     y = y + 5;        //20
//     cout << x << " "; //20
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void swap(int n)           //input me jo n h wo dursa n h (local) jisme sirf n ka copy value aaya h ..kind of judwa.
// {
//     n = n * n;
//     cout << "n ki value in function : " << n << endl;
// }

// int main()
// {
//     int n;
//     cout << "enter n : ";
//     cin >> n;
//     swap(n);           //input me n variable bheja
//     cout << "n ki value in main : " << n << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void swap(int no)          //ye cheez ho rha uper wale program me sirf n ki value copy ho rhi idhar ek naya h variable h.
// {
//     no = no * no;
//     cout << "n ki value in function : " << no << endl;
// }

// int main()
// {
//     int n;
//     cout << "enter n : ";
//     cin >> n;
//     swap(n);
//     cout << "n ki value in main : " << n << endl;
//     return 0;
// }

//AND THIS THING IS CALLED CALL BY VALUE.

//NOW CALL BY REFERENCE :

// #include <bits/stdc++.h>
// using namespace std;
// void swap(int &no) //pay attention here it will create a new name for the same variable instread of creating a new
// {                  //variable .. so basically &no is pointing to the location of declared variable n in line 53..
//     no = no * no;  //or it is just a nickname for variable n.
//     cout << "n ki value in function : " << no << endl;
// }

// int main()
// {
//     int n;
//     cout << "enter n : ";
//     cin >> n;
//     swap(n);
//     cout << "n ki value in main : " << n << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void swap(int x, int y)             //call by value : (copy number with new local variable x and y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
//     cout << "fx : " << x << endl
//          << "fy : " << y << endl;
// }

// int main()
// {
//     int x = 10, y = 20;
//     swap(x, y);
//     cout << "x : " << x << endl
//          << "y : " << y << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void swap(int &x, int &y)         //call by reference : nickname of original x and y are also x and y.
// {
//     int temp = x;
//     x = y;
//     y = temp;
//     cout << "fx : " << x << endl
//          << "fy : " << y << endl;
// }

// int main()
// {
//     int x = 10, y = 20;
//     swap(x, y);
//     cout << "x : " << x << endl
//          << "y : " << y << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print(vector<int> v) // creates a copy function v and stores value

// {
//     v[0] = 12; // change in copy function
//     for (auto x : v)
//         cout << x << " ";
// }
// int main()
// {
//     vector<int> v;
//     for (int i = 0; i < 1000; i++)
//     {
//         v.push_back(i + 1);
//     }

//     print(v); //1. here it will connect to the function and send a copy of v to print function

//     cout << endl
//          << " main : " << v[0]; //original function first element. 1 not 12
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// void Print(vector<int> &v) //use of references ..nickname not copy
// {
//     v[0] = 12;
//     for (auto x : v)
//         cout << x << " ";
// }

// int main()
// {
//     vector<int> v;
//     for (int i = 0; i < 1000; i++)
//         v.push_back(i + 1);
//     Print(v);
//     cout << endl
//          << "main : " << v[0];    //original
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vect{10, 20, 30, 40};
//     for(auto x: vect)            // just a copy which stores copy of values.. not original
//         x = x+5;
//     for (auto x: vect)
//         cout << x << " ";
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> vect{10, 20, 30, 40};
//     for (auto &x : vect) // original nickname
//         x = x + 5;
//     for (auto x : vect)
//         cout << x << " ";
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str = "ankit";
//     for (auto &x : str) //now x holds actual value element by element otherwise if we didnt use & it just creates a copy of element and store it in the x..resulting change in x wont reflect in actual string.
//     {                   
//         if (x == 'i')  
//         {               
//             x = 'j';
//         }
//     }
//     cout << str;

//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     const vector<int> vect{10, 20, 30, 40}; //using const restricts the values for read only purpose
//     for (auto &x : vect) // just a copy which stores copy of values.. not original
//         x = x + 5;      // will not work
//     for (auto x : vect)
//         cout << x << " ";
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<string> vect{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};
//     for (auto x: vect)     //creates copy of each element using more space and resource
//         cout << x << " ";
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<string> vect{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};
//     for (auto &x : vect) //showing the actual element by adressing to their space saves energy.
//         cout << x << " ";
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<string> vect{"geeksforgeeks practice", "geeksforgeeks ide", "geeksforgeeks write"};
//     for (const auto &x: vect)   //try to use const here for no accidental changes inside this loop.
//         cout << x << " ";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10, z = 20;
//     int &y = x; //x and y are same now.
//     y = z;      // here z's value is assigned to x and y ..and z is not a new reference.
//     y = y + 5;  //25(y=20)
//     cout << x << " " << y << " " << z;
//     return 0;
// }

//  #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n = 10,z=0;
//     int &p = n;
//     int &v = p;         //we can create reference of a reference
//     v = z;
//     n++;
//     cout << p;     //1
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int &fun() //little tough: here we are providing fun which returns reference of a static variable.
// {
//     static int x = 10;
//     return x;
// }
// int main()
// {
//     int &z = fun(); //here we are saving reference of static variable x to the new reference of z.
//     z = 50;
//     cout << z << " ";
//     cout << fun() << " "; //z and x are connected
//     z = 30;
//     cout << fun();//z and x are connected
//     return 0;
// }


