#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<char,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char a;int b;
        cin>>a>>b;
        m.insert({a,b});
    }
   m.erase(m.begin());
   for(auto u:m)
   {
       cout<<u.first<< " "<< u.second<<endl;
   }
}

