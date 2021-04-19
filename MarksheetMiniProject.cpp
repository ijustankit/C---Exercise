#include <bits/stdc++.h>
using namespace std;
class Marksheet
{
public:
    bool flag = false;

    vector<string> teachers{"vikas", "manoj", "alka", "hod"};

    void setmarks(string &username, int &password)
    {
        bool flag1 = true;

        for (int i = 0; i < teachers.size(); i++)
        {
            if (username == teachers[i])
            {
                flag1 = false;
                break;
            }
        }
        if (flag1)
        {
            cout << "unauthorised username" << endl;
            return;
        }
        if (password != 123123)
        {
            cout << "wrong password" << endl;
            return;
        }
        cout << "Hindi : ";
        cin >> hindi;
        cout << "English : ";
        cin >> English;
        cout << "maths : ";
        cin >> maths;
        cout << "science : ";
        cin >> science;
        cout << "history : ";
        cin >> history;

        flag = true;
    }
    void display()
    {
        if (flag)
        {
            system("CLS");
            cout << "marks updated successfully" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "Hindi : " << hindi << endl;
            cout << "English : " << English << endl;
            cout << "maths : " << maths << endl;
            cout << "science : " << science << endl;
            cout << "history : " << history << endl;
        }
    }

private:
    int hindi;
    int English;
    int maths;
    int science;
    int history;
};

int main()
{
    system("CLS");
    string username;
    int password;
    cout << "username : ";
    cin >> username;
    cout << "password : ";
    cin >> password;

    Marksheet ankit;
    ankit.setmarks(username, password);
    ankit.display();
}