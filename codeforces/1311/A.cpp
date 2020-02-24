#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll a,b;
       cin>>a>>b;
       ll d=abs(a-b);
       if(a==b)
       {
           cout<<"0"<<endl;
       }
       else if(d%2==0)
       {
           if(a>b)
           {
              cout<<"1"<<endl;
           }
           else if(a%2==0)
           {
               cout<<"2"<<endl;
           }
           else
           {
               cout<<"2"<<endl;
           }
       }
       else
       {
           if(a>b)
           {
                cout<<"2"<<endl;
           }
           else
           {
                cout<<"1"<<endl;
           }
       }
    }
}
