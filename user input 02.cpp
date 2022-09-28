
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int >m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       string s;
       int a;
       cin>>s>>a;
       m[s]=a;
    }
    for(auto u:m)
    {
        cout<<u.first<< " "<<u.second<<endl;
    }
}
