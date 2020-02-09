#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
         ll n,x,s=0,c=0,bal=0;
        vector<ll>v,z;
        cin>>n;
        while(n--)
        {
            cin>>x;
            if(x!=0)
            {
               v.push_back(x);
               s=s+x;
            }
            else
            {
                z.push_back(x);
            }
        }
        ll l=z.size();
        if(l==0)
        {
            if(s==0)
            {
                c=1;
            }

        }
        else if(s>=0)
        {
           c=l;
        }
        else
        {
            while(1)
            {
                bal=s+l;
                if(bal!=0)
                {
                   c=l;
                   break;
                }
                else
                    l++;
            }
        }
        cout<<c<<endl;

    }
}
