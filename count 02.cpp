#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,1,2,2,2,2,1,1,1,3,3,3,6,6,5,6,5,5,4,4,4,5,5,6,2,2,3};
    map<int,int>cnt;

    for(auto u:v)
    {
        cnt[u]++;
    }
    for(auto u:cnt)
    {
        cout<< "index : "<<u.first<< " counting value: "<<u.second;
        cout<<endl;
    }
}
