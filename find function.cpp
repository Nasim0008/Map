#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        int b;
        cin>>b;
        m.insert({a,b});
    }
    if(m.find('p')!=m.end())
    {
        cout<< "key found  && value is "<<m['p']<<endl;
    }
    else
    {
        cout<< "key not found"<<endl;
    }
}
