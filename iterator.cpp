#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int a = 0;
    vector<int> v;
    map<int, int> m;
    cout << "type N: ";

    cin >> N;

    for (int i = 0; i < N;i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    for(auto x:v)
    {
        m[x]++;
    }
    for(auto x:m)
    {
        if(x.second%2==0)
        {
            a++;
        }

    }

    if(a>0)
    {
        cout << a;

    }
    else
    {
        cout << -1;
    }
}