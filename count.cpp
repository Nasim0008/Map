#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30,30,2,10,20,5,62,62,45,32};
    map<int,int>cnt;
    for(int i=0;i<v.size();i++)
    {
        cnt[v[i]]++;
    }
    cout<<cnt[10]<<endl;
}
