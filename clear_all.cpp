#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[4]="nasim";
    m[2]="tesla";
    m.insert({3,"micro"});
    m.insert({5,"ayesha"});  
    m.clear();
    cout<<m.size();

}