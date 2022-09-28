#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,bool>vis;
    vector<int>v={1,2,3,4,5,6,7,8,5,4,6,2,3,1};
    for(auto u:v)
    {
        vis[u]++;
    }
    for(auto u:vis)
    {
        cout<<u.first<< " "<<u.second<<endl;
    }

    cout<< "Unique value: ";
    for(auto u:vis)
    {
        cout<<u.first<< " ";
    }
}

