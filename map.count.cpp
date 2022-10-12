
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        m.insert({a,b});

    }
  if(m.count(10))// if the key value 10 is present then its return 1 otherwise return 0
  {
      cout<< "Nasim is a good programmer"<<endl;
  }
  else
    {
        cout<< "Everything is possible"<<endl;
    }
  }
