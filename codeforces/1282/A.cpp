#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll t;cin>>t;
    while(t--)
    {
        signed int p,q,c,r,ans,x1,x2,a,b;
        cin>>p>>q>>c>>r;
        ans=abs(p+(-1)*q);
        a=min(p,q);
        //cout<<"a:"<<a<<" ";
        b=max(p,q);
        //cout<<"b:"<<b<<endl;
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else if(a!=b)
        {
           x1=c-r;
           x2=c+r;
           if(x1<=a && x2>=b)
            cout<<"0"<<endl;
           else if(x1>=a && x2<=b)
           {
               ans=ans-abs(x2-x1);
               cout<<ans<<endl;
           }
           else if(x1>=b)
            cout<<ans<<endl;
           else if(x2<=a)
            cout<<ans<<endl;
           else if(x2<b && x1<=a)
            cout<<ans-(x2-a)<<endl;
           else if(x1>a && x2>=b)
            cout<<ans-(b-x1)<<endl;
        }

///3 -3 -2 3

    }
    }

