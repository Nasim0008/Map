#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,int >m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        m[a]=b;
    }
    for(auto u:m)
    {
        cout<<u.first<< " "<<u.second<<endl;
    }
}
