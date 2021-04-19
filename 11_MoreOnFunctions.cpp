//Default arguements we can only make last parmeters(a,b,c=0,d=0) right
// not like (a,b,c=0,d)          wrong






//default arguments using integers yahan c or d ki value nahi b di jaygi to bhi ye kam krega or de di gyi to well and good

// #include<iostream>
// using namespace std;
// int max(int a,int b,int c=0,int d =0)
// {
//     if((a>b) &&(a>c)&&(a>d))                                 //NOTE: BOOLEAN OPERATORS ARE USED BY THIS BETWEEN EXPRESSIONS
//         cout<<a<<"is greater\n";
//     else if((b>c) &&(b>a)&&(b>d))
//         cout<<b<<"is greater\n";
//     else if((c>a) &&(c>b)&&(c>d))
//         cout<<c<<"is greater\n";
//     else
//     {
//         cout<<d<<"is greater\n";
//     }
//     return 0;
// }
// int main()
// {
//     max(12,9,457);
//     return 0;
// }





//Default arguements using string
// #include<iostream> 
// using namespace std; 

// void printDetails(string f_name, string l_name ="")
// {
//     cout << f_name << " ";
//     if(l_name!="") 
//     {
//         cout << l_name << endl;
//         return;
//     }
//     cout<<endl;
    
// }
// int main() 
// {
//     printDetails("Sandeep", "Jain");
//     printDetails("Shivam"); 
//     printDetails("Ankit","Srivastava");
//     printDetails("ANit","Mishra");
//     return 0; 
// }

////////////////////////

// #include<iostream>
// using namespace std;

// int main()
// {
//     fun();
//     return 0;
// }

// void fun()                    //it will not work because function is not defined or declared above the main function
// {
//     cout<<"hello";
//     return;
// }



// #include<iostream>
// using namespace std;
// void fun();    //SEMICOLON            //here we have declared function and then wrote its definition under main function so it'll work.
// int main()
// {
//     fun();
//     return 0;
// }

// void fun()                          //CONTINUE
// {
//     cout<<"hello";
//     return;
// }



// #include<iostream> 
// using namespace std; 
// void fun(int);               //we can use only int here because in defition of void fun int x is declared

// int main()  
// {
//     fun(2);
//     return 0; 
// }
// void fun(int x)                //here int x is declared.
// {
//     cout << x << " ";
//     cout << "Hello "; 
// }

// #include<iostream> 
// using namespace std; 
// void fun(int, int, char);                 //can be written as int int char

// int main() 
// {
//     fun(10,29,'g'); 
//     return 0; 
// }
// void fun(int x, int y, char z )                //declared here
// {
//     cout << x << " ";
//     cout << "Hello "; 
// }



//STATIC VARIABLE

// #include<iostream> 
// using namespace std; 
// void fun()
// {
//     static int x = 1;                   //static variable updates it value to the lst modified value example in the next calling input will be 2.
//     x++;
//     cout << x << " "; 
// }

// int main() 
// {
//     fun(); 
//     fun();
//     fun();
//     return 0; 
// }


// #include<iostream> 
// using namespace std; 
// void fun()
// {
//     int a=1;                       //local variable                  in next calling a=1            //2 2 2(local)
//     static int x = 1;                   //static variable            in next calling input will be x=2    //2 3 4(static)
//     x++;
//     a++;
//     cout << x << " "<< a<<endl;                     
// }

// int main() 
// {
//     fun(); 
//     fun();
//     fun();
//     return 0; 
// }

// #include<iostream> 
// using namespace std; 

// void fun(int x, int y, int z)                //formal parameters
// {
//     cout << x << " " << y << 
//     " " << z << " "; 
// }

// int main() 
// {
//    int i = 2; 
//    fun(++i,++i,++i);                      //compiler dependent output i.e. undefined  //actual parameters k assigning order defined nhi hota compiler me
//     return 0;                                    //....left to right be assign ho skte or right to left bhi.
// }

// #include<iostream> 
// using namespace std; 

// int main() 
// {
//     cout << "geeks" << " ";
//     main();        //this code seems to be in a infinite loop and shows the output that way
// } //but it will fill the stack with too many main function initializations and end up segmentation error or Stackoverflow
                                             

// #include<iostream> 
// using namespace std; 
// int fun(int x, int y = 0, int z)                   //wont work because last parameter is not default arguement
// { 
//     return x+y+z; 
// }
// int main() 
// {
//     cout << fun(10,20,30); 
// }


// #include<iostream> 
// using namespace std;  
// int fun(int x, int z, int y = 0)             //can be written in this way
// {
//     return x+y+z; 
// }
// int main() 
// {
//     cout << fun(10,20,30); 
// }


//NAHI SAMAJH AAYA
// #include<iostream> 
// using namespace std; 
// void fun(int x)
// {
//     if(x==0)
//         return; 
//     else
//     {
//         cout << "Geeks" << " ";
//         fun(x-1);                     //recursion 
//     }
// }
// int main()  
// {
//     fun(3); 
//     return 0; 
// }

// #include<iostream> 
// using namespace std; 
// void fun(int x)
// {
//     if(x==0)
//         return; 
//     else
//     {
//         cout << "Geeks" << " ";
//         fun(x-1); 
//         cout << "for geeks" << " ";
//     }
// }
// int main() 
// {
//     fun(3); 
//     return 0; 
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int number,i;
//     bool flag=true;
//     cout<<"number = ";
//     cin>>number;
//     for(i=2;i<number;i++)
//     {
//         if((number%i)==0){
       
//             flag = false;
//             cout<<"isse katega = "<<i<<endl;
//             cout<<"Non prime";
//             break;
//         }
//     }
//     if (flag==true){
//         cout<<"Prime";
//     }
    
    
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int number,i;
//     cout<<"Enter your number =";
//     cin>>number;
//     int flag = 0;
//     for(i=2;i<number;i++)
//     {
//         int z = number%i;
//         //out<<"z = "<<z<<" "<<i<<endl;
//         if(z==0)
//         {
//             flag =1;
//             //cout<<"Not prime\n";
//             //cout<<"i = "<<i;
//             //break;
//         }
        
//     }
//     if(flag==0)
//         cout<<"prime";
//     else{
//         cout<<"not Prime";
//         //cout<<flag;
//     }
//     return 0;
// }
