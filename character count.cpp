#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    map<char,int>m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    for(auto u:m)
    {
        cout<<u.first<< " "<<u.second<<endl;
    }
}
