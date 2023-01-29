#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[4]="nasim";
    m[2]="tesla";
    m.insert({3,"micro"});
    m.insert({5,"ayesha"});
    map<int,string>:: iterator it;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<< " "<<(*it).second<<endl;
    }
    cout<<endl;
    m.erase(3);
    for(auto u:m)
    {
        cout<<u.first<< " "<<u.second<<endl;
    }

}