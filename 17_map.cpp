
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     set<int> s;
//     vector<int> v{1, 2, 54, 12361, 541, 4, 158, 46};
//     for (int i = 0; i < v.size(); i++)
//     {
//         s.insert(v[i]);
//     }

//     for (auto x : s)
//         cout << x << " ";
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unordered_set<int> u;
//     vector<int> v{1, 15415, 15531, 351, 5135, 1, 441, 21, 351};
//     for (int i = 0; i < v.size(); i++)
//     {
//         u.insert(v[i]);
//     }
//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
//     // cout << u.size();
//     // u.clear();
//     // cout<<endl<<u.size();
//     if (u.find(5135) == u.end())
//         cout << "not found";
//     else
//         cout << "found"<< *(u.find(5135));

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     unordered_map<string, int> m;
//     m["apple"] = 21;
//     m["banana"] = 211;

//     m.insert({"cherry", 19});
//     for (auto x : m)
//     {
//         cout << x.first << " " << x.second << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<char,int> m;
//     vector<char>v{'a','f','d','s','e','t','a','s','f','s','e','t','f','s','w','d'};
//     for(int i = 0;i<v.size();i++)
//     {
//         m.insert({v[i],})
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// //    char str[100] = "this string contains many alphabets";
// //    int i = 0, alphabet[26] = {0}, j;
// //    while (str[i] != '\0') {
// //       if (str[i] >= 'a' && str[i] <= 'z') {
// //          j = str[i] - 'a';
// //          ++alphabet[j];
// //       }
// //       ++i;
// //    }
// //    cout<<"Frequency of all alphabets in the string is:"<<endl;
// //    for (i = 0; i < 26; i++)
// //    cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;

//     string str = "there's lot of characters";
//     vector<int>alphabets(26,0);
//     int j;
//     for(int i = 0;i<alphabets.size();i++)
//     {
//         if(str[i]>='a' && str[i]<='z')
//         {
//             j = str[i]-'a';
//             ++alphabets[j];
//         }
//     }

//     for(int i = 0; i<26; i++)
//     {
//         cout<<char(i+'a') << " : " << alphabets[i]<<endl;
//     }

//    return 0;
// }

//character counter using map
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<char,int>m;
//     string str = "there's a lot of characters";
//     for(int i =0;i<str.size();i++)
//     {
//         if(str[i]>='a' && str[i]<='z')
//         {
//             if(m.find(str[i])==m.end())
//                 m.insert(make_pair(str[i],1));
//             else
//                 m[str[i]]++;
//         }
//     }
//     for(auto x :m)
//     {
//         cout<<x.first<<" : "<<x.second<<endl;
//     }
//     return 0;
// }

//testing
// #include <bits/stdc++.h>
// using namespace std;
// bool checkMagazine(vector<string> magazine, vector<string> note) {

//     unordered_map<string,int> m;
//     for(auto &x:magazine)
//     {
//         m[x]++;
//     }
//     for(auto &x:note)
//     {
//         if(m[x]>0)
//             m[x]--;
//         else
//             return false;
//     }
//     return true;
// }

// int main()
// {
//     vector<string> magazine{"ankit", "anam", "abhishek", "arvind", "saima", "ankit"};
//     vector<string> note{"ankit", "abhishek", "saima", "ankit"};
// unordered_map<string,int>m;
// for(auto &it:v)
// {
//     m[it]++;
// }

// for(auto x:m)
// {
//     cout<<x.first<<" : "<<x.second<<endl;
// }
// m["ankit"] = m["ankit"]+1;       //0+1
// m["pooja"];
// for(auto x :m)
// {
//     cout<<x.first<<" : "<<x.second<<endl;
// }

//     checkMagazine(magazine, note);

//     return 0;
// }

//check if the string s2 can be created using words we have in s1.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = {"hey this is peter parker how you doing peter"};
    string s2 = {"hey is you xeb doing"};
    stringstream ss(s1);
    stringstream sst(s2);
    unordered_map<string, int> m;
    string word;
    string shabd;
    while (ss >> word)
    {
        m[word]++;
    }

    while (sst >> shabd)
    {
        if (m[shabd] > 0)
        {
            m[shabd]--;
        }
        else
        {
            cout << "can't possible";
            return 0;
        }
    }
    cout << "possibble";
    return 0;
}
