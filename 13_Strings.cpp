//welcome to strings there are 2 ways
//1.Arrays of characters (c style)
//2.using an object of string class.

//1.Arrays of characters (c style)
// #include<iostream>
// using namespace std;

// int main()
// {
//     char str[] = "gfg";            //char are initialized like 'l' but we use " " here ....
//     cout << str;        //it understands it like g f g \0(end it will always looked for in any str function)
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     char str[] = "gfg";
//     cout << sizeof(str);           //returns 4 because \0 is also present and char =1 byte
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char str[] = {'g', 'f', 'g'};                //finds for \0 but nhi milega 
 apne se kuch print kr lega
//     cout << str;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char str[] = {'g', 'f', 'g', '\0'};          //now its good and prints gfg //itta bakchodi se acha h "gfg" likh de
//     cout << str;
//     return 0;
// }

//strcmp function which comes before or after in string
// a
// aa
// aaa
// ab
// abbbb
// abbbbbbb
// ac                 (incresing order from top)
// #include <iostream>
// #include <cstring> //keep in mind this
// using namespace std;

// int main()
// {
//     char s1[] = "abc";
//     char s2[] = "bcd";
//     int res = strcmp(s1, s2); //returns if first string comes before or after so in this case returns -1
//     if (res > 0)
//         cout << "Greater";
//     else if (res == 0)
//         cout << "Same";
//     else
//         cout << "Smaller";
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     char s1[] = "gfg";
//     char s2[] = "bcd";
//     int res = strcmp(s1, s2); //returns 1 ie greater
//     if (res > 0)
//         cout << "Greater";
//     else if (res == 0)
//         cout << "Same";
//     else
//         cout << "Smaller";
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     char s1[] = "bcd";
//     char s2[] = "bcd";
//     int res = strcmp(s1, s2); //return 0
//     if (res > 0)
//         cout << "Greater";
//     else if (res == 0)
//         cout << "Same";
//     else
//         cout << "Smaller";
// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
//     char str[5];
//     strcpy(str, "gfg");             //strcpy function use
//     cout << str;
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
//     char str[5];
//     char str1[5] = "gfg";
//     strcpy(str, str1);           //also can work in this way
//     cout << str;
//     return 0;
// }

//2. C++ strings (Recommended way)

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter your name = ";
//     getline(cin, str);    //doesnt stop until enter key is pressed.
//     cout << "\nYour name is " << str;
//     return 0;
// }

// #include <iostream>
// #include <cstring>              //must include this
// using namespace std;
// int main()
// {
//     string str = "my name is Ankit"; //16 including spaces count start with 1 because its counting
//     // cout << str.length() << endl;    //str.length()    for length
// //     str = str + " gfg";              //concatrenate the strings. like python
// //     cout << str << endl;
// //     cout << str.substr(3, 4) << endl; //return name because index 3 is n and then it count 4 elements from n.
// //     cout << str.substr(3) << endl;    //return reaminder from 3rd index.
//     cout << str.find("An");           //returns the index of first occurence of first letter.
//     return 0;
// }

// #include <iostream>
// #include <cstring> //must include this
// using namespace std;
// int main()
// {
//     string str = "dog:cat";
//     cout << str.substr(str.find(":") + 1);                 //   MISTAKE I WROTE THIS str.substr(find(":") + 1) .. keep an eye to attach object str with function str.function() like this.
//     return 0;
// }

//getline

// #include <iostream>
// #include<cstring>
// using namespace std;
// int main()
// {
//     string str;
//     cout << "type = ";
//     getline(cin, str, 'a'); //stops when it sees 'a' any type for manik it will cout m. used for multiple lines.
//     cout << str;
//     return 0;
// }

//traversing

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str = "yo what is up guys";
//     for (int i = 0; i < str.length(); i++) //str.length() function like vector..where we use v.size()
//         cout << str[i] << " ";
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str = "yo what is up guys";
//     for (auto i : str) //for each loop can use char or auto
//         cout << i << " ";
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str = "yo what is up guys";
//     cout << *(str.end() - 1); // returns element s
//     cout << "size = " << str.size() << " " << str.length();           //same

//     return 0;
// }

// //TCS Question
// #include <iostream>
// #include <vector>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string input;
//     int count = 0;
//     vector<string> v = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
//     cin >> input;
//     for (string x : v)          //pay attention here i am using for each loop to iterate through the elements.
//     {
//         if (input == x)
//         {
//             count = 1;
//             break;
//         }
//     }
//     if (count == 1)
//         cout << input << " is a keyword";
//     else
//         cout << input << " is not a keyword";
//     return 0;
// }

// #include <iostream>
// #include <bits/stdc++.h>
// #include <cstring>
// using namespace std;
// int main()
// {
//     vector<int> v = {2, 54, 15, 25, 484, 151, 74};
//     for (auto x : v)
//         cout << x << " ";

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == 25) //doubt: here x holds the value or points the value of x as 25
//         {               // maybe but for inserting it into vector u have to push it.
//             v[i] = 17;
//         }
//     }
//     cout << endl;
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i] << " ";

//     return 0;
// }

//node js react js django

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
// #include <cstring>
// using namespace std;
// int main()
// {
//     string str = "ankit";
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == 'i')                //works because we are replacing the element in that index.
//         {
//             str[i] = 'j';
//         }
//     }
//     cout << str;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int counter = 0;
//     vector<char> v = {'w', 'e', 'e', 'r', 't', 'y', 'u', 'u', 'u', 't', 'r', 'r', 'w', 't', 'y', 'n', 'd', 'w', 't', 'y', 'n', 'd', 'f', 'h', 'k', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r', 'r'};
//     for (int i = 0; i < v.size(); i++)
//     {
//         if ('r' == v[i])
//         {

//             counter++;
//         }
//     }
//     cout << 'r' << " " << counter << endl;
//     // v.erase(remove(v.begin(), v.end(), 'w'), v.end());
//     // for (auto x : v)
//     // {
//     //     cout << x << " ";
//     // }

//     return 0;
// }