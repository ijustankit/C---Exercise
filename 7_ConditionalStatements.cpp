// #include<iostream>

// using namespace std;

// int main()
// {
//     int number;
//     cout<<"number dal na bhai= ";
//     cin>>number;
//     if (number>10)             //agr ye false hoga tohi aage else if pe jayga .true hoga to execute hoke program finish ho jayga bhale hi else if wala sahi ho.
//         cout<<"inside if";
//     else if(number>5)                  //yahan pe ho matlab pichla wla if statement ka condition false hua hai.
//         cout<<"inside else if";
//     else                          //yahan pe ho matlab na hi if or na hi else if chala hai.
//         cout<<"kas be";

//     return 0;
// }

//write a program which returns sum of first n natural numbers & returs an error when entered number is negative.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout<<"Enter a number = ";
//     cin>> number;                  // MISTAKE: HAMESHA cin K OPPOSITE SIDE EK VARIABLE HI HOGA. KUCH LIKHNA H TO COUT ME LIKHO.
//     if(number<0)
//         cout<<"no output";
//     else
//     {
//         cout<<(number)*(number+1)/2;
//     }
//     return 0;
// }

//Program to enter adult if age is equal to or more than 18.otherwise print not adult.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter age= ";
//     cin>>age;
//     if (age>=18)
//         cout<<"Adult";
//     else
//     {
//         cout<<"Not adult";
//     }
// }

//Program to enter adult if age is equal to or more than 18.and ask name if greater than 18.otherwise print not adult.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cout<<"Enter age= ";
//     cin>>age;
//     if (age>=18)
//     {                                                       // these curly braces are used when there are more than one line in if statement.use it.
//         cout<<"Adult\n";
//         string name;                                        //string datatype is used when taking names as input. using char will return first letter.
//         cout<<"enter name= ";
//         cin>>name;
//         cout<<name;
//     }
//     else
//     {
//         cout<<"Not adult";
//     }
// }

// ////////////////

// male adult,female adult, male kid ,female kid identifier.

// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     char Gender;                                     //use of string is not valid as its not a built in fucntin in c++. instead use char[size]
//     cout<< "Enter age = ";
//     cin>>age;
//     cout<< "Enter Gender m or f = ";
//     cin>>Gender;
//     if(Gender == 'm')
//     {
//         if (age>=18)
//          {
//                 cout<<"Male Adult";
//          }
//         else
//         {
//             cout<<"male kid";
//         }
//     }
//     else if (Gender == 'f')
//     {
//         if (age>=18)
//             {
//                 cout<<"Female Adult";
//             }
//         else
//         {
//             cout<<"Female kid";
//         }
//     }
//     else
//     {
//         cout<<"print proper Gender m or f";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//   //  for (int i = 0; i < 10; i=i+2)
//    // {
//         cout << " har har mahadev";
//    // }
// }