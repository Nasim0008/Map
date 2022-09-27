#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<string,int> m;
    m["nasim"]=10;
    m["shohan"]=20;
    m["Omaer"]=30;
    m["shakib"]=40;

    for(auto u:m)
    {
        cout<<u.first << " "<<u.second<<endl;
    }
}
