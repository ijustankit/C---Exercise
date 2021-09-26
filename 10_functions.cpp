//function are the entity which return a value defined in it.it may or may not take and produce output.

//void function()
// {
//     int x = 10+20;
//     cout<<x;                  //is not producing any output so we use void
// }

// #include<iostream>
// using namespace std;

// int add(int a, int b)                 //int is used because it produces an output.
// {
//     return (a+b);                    //returns sum of provided arguements can be replaced by cout<<a+b;
// }

// int main()
// {
//     int a = 10, b = 20;
//     int res = add(a,b);

//     cout << res;
//     return 0;
// }

// //use of void
//  #include<iostream>
// using namespace std;

// void findGreater(int x, int y)                     //using void here because it doesnt return any data type,so.. pata h chutiya concept
//                  //hai lekin hamesha hi int me apko ek return k sath koi value deni padegi(nhi h to 0).. int lagega to return me a ya b ya koi integer hoga void me sirf return; likhenge.
// {
//     if(x>y)
//     {
//         cout << x << " is greater " << endl;
//         return;
//     }

//     cout << y << " is greater " << endl;
// }
// int main()
// {
//     findGreater(10,20);
//     findGreater(20,10);
//     return 0;
// }

//maximum between two numbers while taking input from user

// #include<iostream>
// using namespace std;
// int max(int x,int y)                         //defined x and y here as an integer
// {

//     if (x>y)
//         return x;
//     return y;
// }

// int main()
// {
//     int x,y;                //defined x and y here as an integer
//     cout<<"type x = ";
//     cin>>x;
//     cout<<"type y = ";

//     cin>>y;
//     cout<<"maximum between two = "<<max(x,y);
//     return 0;
// }

//

