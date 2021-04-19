// for loop contains initialization(which executes only once),condition trUe then goes inside the loop,increment or decrement(done when loop finish)
//step 1 intialize
//step 2 check condition true or false
//step 3 inside loop
//step 4 after exit increment or decrement.  

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     for(i=0;i<10;i++)
//         cout<<i+1<<" its working\n";
//     return 0;
// }


// output 
// 1 its working
// 2 its working
// 3 its working
// 4 its working
// 5 its working
// 6 its working
// 7 its working
// 8 its working
// 9 its working
// 10 its working


///////////////////////////


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i;
//     for(i = 0; i < 10; i++)
//  {
     
//      cout << "Yo";                 //works output of this = yoyoyoyoyoyoyoyoyoyo
//      cout<<i;                  //works output of this i //0123456789
    
// } 
// cout<<i;     //works   //output of this i = 10
//      return 0;
// } 


//output = Yo0Yo1Yo2Yo3Yo4Yo5Yo6Yo7Yo8Yo910

///////////////////


// #include<iostream>
// using namespace std;

// int main()
// {
    
//     for(int i = 0; i < 10; i++) //this new form of declaration works but cant get value of i at the end or out of the scope.
//  {
     
//      cout << "Yo";                 //works output of this = yoyoyoyoyoyoyoyoyoyo
//      cout<<i;                  //works output of this i //0123456789
    
// } 
// cout<<i;     //does not work   //output out of scope
//      return 0;
// } 


//////////

//this form also work
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i;
//     i = 0;
//     for(;i < 10 ; )
//  {
     
//     cout << "Yo";                 //works output of this = yoyoyoyoyoyoyoyoyoyo
//     cout<<i;                  //works output of this i //0123456789
//     i++;
// } 
// cout<<i;     //works   //output of this i = 10
//      return 0;
// } 

///////

// //its an infinite loop


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i;
//     i = 0;
//     for(; ; )          // infinite loop
//  {
     
//     cout << "Yo";                 //works output of this = yoyoyoyoyoyoyoyoyoyo
//     cout<<i;                  //works output of this i //0123456789
//     i++;
// } 
// cout<<i;     //works   //output of this i = 10
//      return 0;
// } 



// #include<iostream>
// using namespace std;
// int main()
// {
//     int number;
    
//     cout<<"Print table of = ";
//     cin>>number;
//     int i;
//     for(i=1;i<11;i++)         // MISTAKE : KEEP AN EYE ON < > SIGNS
//     {
//         cout<<(number*i)<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=0;                                  //while and do while me i ki value phle hi declare karni padti hai.
//     while (i<=10)
//     {   
//         cout<<i<<" inside while \n";
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=0;                                //while and do while me i ki value phle hi declare karni padti hai.
//     do{
//         cout<<i+1<<" yo whats up fam\n";                       //in do while do part always runs even if condition is not met atleast one time
//         i++;                                  //while or for loop me condition true hone pe hi loop k andar jayga.
//                                               //do while me ghus jayga fir check krega. 
    
//     }
//     while(i<5);                       //REMEMBER--> DO WHILE ME here is a semicolon
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 0;
//     do{
//         cout << "GfG";
//         i++;
//     } while (false);                    //here the condition is false still it runs one time.
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     while(20)                                //any non zero value in boolean returns true, then it become an infinite loop.
//         cout << "Hello";                       //to stop a infinite loop press ctrl+c

// }
