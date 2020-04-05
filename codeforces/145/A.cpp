#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
main()
{
    string s,t;
    cin>>s>>t;
    int c=0,d=0;
    for(int i=0;i<s.sz;i++)
    {
      if(s[i]!=t[i]){
        if(s[i]=='4')
        {
           c++ ;
        }
        else
            d++;
      }
    }
    cout<<max(c,d);
}