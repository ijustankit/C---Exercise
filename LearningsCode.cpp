// frequency of words in a string using stringstream
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "ankti is an exellent boy he is an exellent boy from the start";
    map<string, int> m;

    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word)
    {
        m[word]++;
    }

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}