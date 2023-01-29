#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m.insert({1,"mina"});
    m.insert({8,"bina"});
    m.insert({87,"tina"});
    m.insert({23,"pina"});
    m.insert({6,"lala"});
    cout<< m.at(87)<<endl<<endl;
    for(auto u:m)
    {
        cout<<m.at(u.first)<<endl;
    }

}