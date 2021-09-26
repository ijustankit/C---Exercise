//pointers

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x = 10; //& used anywhere other than reference returns address of that variable.
//     cout << &x; //returns address of x.
//     return 0;
// }

// *: when used before an address (or address variable,i.e pointers)gives the value of the address.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x = 10; //& used anywhere other than reference returns address of that variable.
//     cout << *(&x); //returns value of address of x.
//     return 0;
// }

//use of *
// 1.used to get value of an address
//2.used to create a pointer.
// int *ptr;
// int* ptr; //both are same and creates a pointer variable.

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int y =10;
//     int*ptr =&y;
//     cout<<*ptr;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string y ="ankit";
//     string *ptr =&y;  //string here defines tht it will store address of a string variable.
//     cout<<*ptr; //returns ankit
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x = 10;
//     int *ptr = &x;
//     cout << *ptr << " "; //10
//     x = x + 30;
//     cout << *ptr << " "; //40
//     cout << ptr << " ";  //value stored in ptr(which is address of x)
//     cout << &ptr << " "; //address of ptr variable
//     *ptr = *ptr + 40;    //*ptr means value in x and itll become 80..
//     cout << x << " ";    //80 //(notice its not a copy original..or i can say its controlling ither variable ..changing other variable)
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int *p1; //never a good idea to dereference a uninitialised pointer.
//     cout << p1 << " ";
//     cout << *p1 << " ";
//     return 0;     //segmentation fault
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int *p1; //tells the compiler that this pointer will store some address
//     double *p2;
//     string *p3;
//     cout << (sizeof p1) << " "; //compiler dependent value of the address
//     cout << (sizeof p2) << " "; //same
//     cout << (sizeof p3) << " "; //same ..because address will be same size for each and every variable.
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int x =10;
//     double y = 100;
//     string str = "ankit";
//     int *p1 = &x;
//     double *p2 =&y;
//     string *p3=&str;
//     cout << &x << " "; //address of x
//     cout << ( p1) << " "; //p1 stores the address of x
//     cout << (sizeof p2) << " ";
//     cout << (sizeof p3) << " ";
//     return 0;
// }

//application

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *p = &a;
//     cout << a << " ";  //5
//     cout << p << " ";  //0xwmejg
//     cout << *p << " "; //5 //dereference operator *
//     cout << &p << " "; //5 //dereference operator *
//     cout << sizeof(&p) << " ";  //memory space for address will be same.
//     cout << sizeof(*p) << " ";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i =10;
//     i+1;     //increasing but not storing in i.
//     cout<<i;        //i =10
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i =10;
//     int *a =&i;
//     *a = *a+1;     //updating the value of *a which is i.
//     cout<<*a+1;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int i = 10;
//     int *p = &i;
//     *p = 12;
//     cout << i;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int n = 5;
//     int *p = &n;
//     int *k = p; //k pointer stores p(p k andar ki value = address of n)
//     n++;        //so basically n k 2 pointers h yahan p or k;
//     *k = *k - 1;
//     cout << *k;
//     return 0;
// }

// #include <bits/stdc++.h>                //Interesting but using references is suggested here.
// using namespace std;
// void fun(vector<int> *v)
// {

//     cout << v->at(1) << v->at(2) << endl;   //stakoverflow line
// }

// int main()
// {
//     vector<int> v;
//     for (int i = 1; i <= 1000; i++)
//         v.push_back(i);
//     fun(&v);
//     // cout << v[0];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n = 10;
//     int *p = &n;
//     cout << p << endl;  //some address of n
//     cout << *p << endl; //10
//     p++;                //pointer will try point to next elements address by adding 4 bytes to the previous address
//     cout << p;       //previous hexadecimal address plus 4 bytes
//     cout << sizeof(p);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double c = 120.32;
//     double *p = &c;
//     cout << p << endl;

//     p++;
//     cout << p;          //8 bytes increased

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[10]{1, 2, 3, 4, 6, 7};
//     cout << arr << endl;     //pointing to the location of first element
//     cout << &arr[0] << endl; //also pointing to the location of same element

//     cout << *arr << endl; //here arr is basically working like a pointer to the array so we tried to dereferece this. and it works by returning us the first element.

//     cout << *(arr + 1) << endl; //arr+1 here is showing the address of the next element by adding 4 bytes to the address and then we are dereferencing it. NOTE: arr++ is not working

//     //system treats arr[3] like *(arr+3).
//     //thats y arr[0] becomes *(arr+0)
//     //basically it adds both arr and index and dereference it..note here index value * data type hoga.
//     //example for int arr[10]{1,2,5,6}
//     // arr[2] = *(arr(address of first element)+ 2 * (4 bytes --> for int))
//     cout << 2 [arr] << endl;     //same as arr[2] because it treats it like this *(arr+2).
//     return 0;
// }

/*Main differences between array pointer and pointer

1.size.
int arr[10]{};
cout<< sizeof(arr); then this will return 40 bytes
jabki arr to point kr rha arr[0] ki location pe
actually wo bus ye bata rha h ki arr kahan se start hua h. wahan se first element b obviously start hoga.



*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int arr[10]{};
//     int *p = &arr[0];
//     cout << arr << " " << sizeof(arr) << endl;  //40 bytes

//     cout << p << " " << sizeof(p) << endl; //4 bytes

//     return 0;
// }

//2nd differnce

/*

arr type krne pe address ata h but arr k nam ka koi alag se pointer ya koi alag se space nhi aata h jahan adress store hua ho  ...


*/

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[10]{};
//     int *p = &arr[0];
//     cout<<"p address: "<<&p<<endl;
//     cout<<arr<<endl; //same
//     cout<< &arr; //same
//     return 0;
// }

//3rd difference
/*
symbol table me changes nahi ho skte.
means array cannot be reassigned
ex - int a = 40;
&a-->780
you cant change its address now.
so arr is working as a pointer but it value cant be changed. ie arr++ will not work.
we can type like this if we want next item *(arr+1)
but not *(arr++) because arr = arr+1 is not possible cant store array at new address. 
p = a +1 krlo allowed h.
but a = a +1 not allowed.

*/

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[10]{1,23,4,64,651,64,5,4};
//     int *p = &arr[0];
//     p++;
//     cout<<*p; //returns next element
//     return 0;
// }

//pointers and functions

// #include <bits/stdc++.h>
// using namespace std;
// void print(int *p) //receives the address of i in a pointer *p
// {
//     cout << *p << endl;     //dereferencing the pointer
// }

// int main()
// {
//     int i = 10;
//     int *p = &i;
//     print(p); // p here stores the address of i.
//     return 0;
// }

//2nd way
// #include <bits/stdc++.h>
// using namespace std;
// void print(int *p) //receives the address of i in a pointer *p
// {
//     cout << *p << endl;     //dereferencing the pointer
// }

// int main()
// {
//     int i = 10;
//     print(&i); // sends address of i.
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void incrementpointer(int *p) //receives copy of address
// {
//     p = p+1; //here p will be different but locally in this scope.
// }
// int main()
// {
//     int i = 10;
//     int *p = &i;

//     cout<<p<<endl;  //same
//     incrementpointer(p); //sends copy of address
//     cout<<p<<endl; //same

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void incrementpointer(int *p) //receives copy of address
// {
//     *p = *p+1; //here p will be different but locally in this scope.
// }
// int main()
// {
//     int i = 10;
//     int *p = &i;

//     cout<<*p<<endl;  //same
//     incrementpointer(p); //sends copy of address
//     cout<<*p<<endl; //same

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int arr[],int size)
// {
//     cout<<arr<<endl;
//     int s =0;
//     for(int i =0; i<size;i++)
//         s +=arr[i];

//     return s;
// }
// int main()
// {
//     int arr[10]{2,1,1,1,1,1,1,1,1,1};
//     cout<<sum(arr,10);
//     cout<<" "<<arr;

//     return 0;
// }

//NOTE:
// #include<bits/stdc++.h>
// using namespace std;
// void func(int n)
// {
//     cout<<&n<<endl;   //different value
// }

// int main()
// {
//     int n =10;
//     cout<<&n<<endl;       //different value
//     func(n);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void func(int arr[])
// {
//     cout << arr << endl; //same value
// }

// int main()
// {
//     int arr[10]{};
//     cout << arr << endl; //same value
//     func(arr);
//     return 0; //so it means array sends pointer to the function.
// }

// #include <bits/stdc++.h>
// using namespace std;
// void func(int arr[])
// {
//     arr[1] = 12;
// }

// int main()
// {
//     int arr[10]{};
//     func(arr);
//     cout << arr[1];  //here it means arr gets modified in the function

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void func(int *arr)   //can also receives it in pointer
// {
//     arr[1] = 12;
// }

// int main()
// {
//     int arr[10]{};
//     func(arr);
//     cout << arr[1];
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int sum(int *arr, int size) // receives array from 1 index.
// {
//     int s = 0;
//     for (int i = 0; i < size; i++)
//         s += arr[i];

//     return s;
// }
// int main()
// {
//     int arr[10]{2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
//     cout << sum(arr + 1, 10)<<endl;  //sending from index 1 to 11 to the function .result includes garbage because arr[11] has garbage value.

//     return 0;
// }

//character wala clear krna h
//Double Pointer : pointers storing address of other pointers

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i = 10;
//     int *p = &i;
//     int **k = &p;    //created another pointer *k which will store address of p. so in the data type of *k we use data type of p which is int *.
//     cout << k << endl;
//     cout<< &p;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i = 10;
//     int *p = &i;
//     int **k = &p;
//     cout << p << endl; //p k andar i ki location
//     cout << *k << endl; // k ke andar p ki location jiska dereference kia to p ki location k andar mila i ki location .
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int i = 10;
//     int *p = &i;
//     int **k = &p;

//     cout << i << endl;
//     cout << *p << endl;  //p k  andar i ka address dereference kia
//     cout << **k << endl; // k ke andar p ki location jiska dereference kia to p ki location k andar mila i ki location jiska fir dereference kia to i ki value.
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void increment1(int **k)
// {
//     k = k + 1;  //here we are changing the double pointer's copy k's value (which stores address of p) -->no change in pointer
// }

// void increment2(int **k)
// {
//     *k = *k + 1; //pointer k andar ki value means address of i gets changed in the p. i ki value unchanged
// }

// void increment3(int **k)
// {
//     **k = **k + 1; // i's value gets changed
// }

// int main()
// {
//     int i = 10;
//     int *p = &i;
//     int **k = &p;
//     increment1(k);
    
//     increment2(k);
    
//     increment3(k);
//     cout<<i<<endl;

//     return 0;
// }
