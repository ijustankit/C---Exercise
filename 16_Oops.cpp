// #include <bits/stdc++.h>
// using namespace std;
// class student //new student class
// {
// public:      //access modifier : public private protected //declared public here because by default its private
//     long long int roll_number; //atributes of the class
//     string name;
// };

// // #include "student.cpp"     //we can also include like this by creating other class file

// int main()
// {
//     student *s2 = new student; //new dynamic allocated memory
//     student ankit;
//     ankit.roll_number = 161381001;
//     ankit.name = "Ankit";
//     cout << ankit.roll_number << endl;
//     cout << ankit.name << endl;
//     s2->name = "Mohit";
//     s2->roll_number = 161381002;    //(*s2).roll_number = 161381002;  //same
//     cout << s2->name << endl;
//     cout << s2->roll_number;
//     return 0;
// }

//GETTERS & SeTTERs

// #include<bits/stdc++.h>
// using namespace std;
// class student //new student class
// {
// public:                        //declared public here because by default its private
//     long long int roll_number; //atributes of the class
// private:
//     int id = 224;

// public:
//     void function()
//     {
//         cout << roll_number << " " << id << endl;
//     }
//     int getid()
//     {
//         return id;
//     }
// };

// int main()
// {
//     student s1;
//     s1.roll_number = 161381001;
//     s1.function();   //by using this we also get the value of id which is private(but function should be within the class itself locally.)
//     cout<<s1.getid(); //returns the value of id.
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class student //new student class
// {
// public:                        //declared public here because by default its private
//     long long int roll_number; //atributes of the class
// private:
//     int id = 224;

// public:
//     void display()
//     {
//         cout << roll_number << " " << id << endl;
//     }
//     int getid()
//     {
//         return id;
//     }
//     void setid(int a)
//     {
//         id = a;
//         return;
//     }
// };       //always remember class ends with ; and function dont

// int main()
// {
//     student s1;
//     student *s2 = new student;

//     s1.roll_number = 12345;
//     s1.display();
//     s1.setid(102);

//     s1.display();

//     return 0;
// }

//these are called getters and setters
// used for adding constraints and extra restrictions

// #include <bits/stdc++.h>
// using namespace std;
// class student //new student class
// {
// public:                        //declared public here because by default its private
//     long long int roll_number; //atributes of the class
// private:
//     int id = 224;

// public:
//     void display()
//     {
//         cout << roll_number << " " << id << endl;
//     }
//     int getid()
//     {
//         return id;
//     }
//     void setid(int a,int password)
//     {
//         if(a<0)
//         return;
//         if(password != 123123 )
//         return;
//         id = a;
//         return;
//     }
// };       //always remember class ends with ; and function dont

// int main()
// {
//     student s1;
//     student *s2 = new student;

//     s1.roll_number = 12345;
//     s1.display();
//     s1.setid(102,123123);  //works
//     s1.setid(-102,123123); //doesn't work
//     s1.setid(102,1231234); //doesn't work

//     s1.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student()
//     {
//         cout<<"inside the new constructor"<<endl;
//     }
// };

// int main()
// {
//     student s1;  //every time the object is created the constructor is called for only once.
//     s1.display(); 
//     student s2;   //when we change something in the  constructor, the initial one gets deleted still it initializes the values with garbage.
//     student *s3 = new student;
//     s3->display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student()     //default constructor
//     {
//         cout << "inside the constructor 1 " << endl;
//     }
//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }
//     student(int r) //so we can create multiple constructors with same name but they can be differentiated easily like no arguemnts, int args , char args etc. //paramerized  constructor
//     {
//         cout << "Inside the constructor 2 " << endl;
//         rollNO = r;
//     }
// };

// int main()
// {
//     student s1;
//     student s4(15, 45);
//     s4.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }
//     student(int r) //so we can create multiple constructors with same name but they can be differentiated easily like no arguemnts, int args , char args etc. //paramerized  constructor
//     {
//         cout << "Inside the constructor 2 " << endl;
//         rollNO = r;
//     }
// };

// int main()
// {
//     student s1;    //throws error because constructors will demand for one arguement
//     student s4(15, 45);
//     s4.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }
//     student(int r) //so we can create multiple constructors with same name but they can be differentiated easily like no arguemnts, int args , char args etc. //paramerized  constructor
//     {
//         cout << "Inside the constructor 2 " << endl;
//         rollNO = r;
//     }
// };

// int main()
// {
//     student s1;    //throws error because constructors will demand for one arguement
//     student s4(15, 45);
//     s4.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }
//     student(int rollNO)
//     {
//        rollNO = rollNO;
//     }
// };

// int main()
// {
//     student s1(105);
//     s1.display();
//     cout<<s1.rollNO;
//     return 0;
// }

// output:
// 6422400 4200976
// 6422400

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }
//     student(int rollNO)
//     {
//        this->rollNO = rollNO;   //is constructor block ka ek "this" milega jisme jo object banega uska address hoga.
//     }
// };

// int main()
// {
//     student s1(105);
//     s1.display();
//     cout<<s1.rollNO;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }

// };

// int main()
// {
//     student s1(105,123);
//     s1.display();
//     student s2(s1);//this will create a copy of object s1 to s2.
//     s2.display();
//     return 0;
// }

// output:
// inside the constructor 3  //constructor message will display once what we have written in the student (int a,int b) constructor because this is getting copied
// 105 123
// 105 123

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }
// };

// int main()
// {
//     student *s1 = new student(102, 104);
//     student s2(*s1);
//     student *s3 = new student(*s1);
//     student *s4 = new student(*s3);

//     s1->display();
//     s2.display();
//     s3->display();
//     s4->display();

//     return 0;
// }

//**3. copy assignment operator (=):**

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }
// };

// int main()
// {
//     student s1(102, 451);
//     student s2(114, 178);

//     student *s3 = new student(12, 14);

//     *s3 = s1;
//     s1.display();
//     s3->display();

//     return 0;
// }

//destructor

// used to deallocate the memory. function se nikalte waqt khud hi call ho jata h.

// - same name as class
// - no return type
// - takes no input args.

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     int rollNO;

// private:
//     int marks;

// public:
//     void display()
//     {
//         cout << rollNO << " " << marks << endl;
//     }

//     student(int a, int b)
//     {
//         cout << "inside the constructor 3 " << endl;
//         rollNO = a;
//         marks = b;
//     }
//     ~student(){
//         cout<<"destructor called."<<endl;
//     }
// };

// int main()
// {
//     student s1(102, 451);
//     student s2(114, 178);

//     student *s3 = new student(12, 14);

//     *s3 = s1;
//     s1.display();
//     s3->display();

//     delete s3;

//     return 0;
// }

// - so basically the destructor called automatically when we are exiting from the main function.
// - but here it's called only two times because s3 is created dynamically. so we have to manually delete the s3 object to deallocate the memory, the destructor gets called for the s3. that's why we used delete s3;

