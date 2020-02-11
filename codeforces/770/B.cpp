#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
main()
{
    ll n,s=0,sml=0,nn,t=0,m=0,index=100;
    bool flag=0;
    cin>>n;
    nn=n;
    vector<ll>v,z,x;
    while(nn)
    {
       s=s+(nn%10);
       z.push_back(nn%10);
       nn=nn/10;
    }
    ll l=z.size();
    if(l==1)
    {
        cout<<n<<endl;
        return 0;
    }
    reverse(z.begin(),z.end());
    if(z[0]-1>0)
    {
        x.push_back(z[0]-1);
        sml=sml+x[0];
        for(int i=1;i<l;i++)
        {
           x.push_back(9);
           sml=sml+x[i];
        }
    }
    else
    {
       for(int i=1;i<l;i++)
       {
          x.push_back(9);
          sml=sml+x[i-1];
       }
    }
    //cout<<s<<endl<<sml<<endl;
    if(s>=sml)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=1;i<l;i++)
    {
        if(z[i]==9 && z[i+1]<9 && flag==0)
        {
            index=i;
            flag=1;
        }
    }
    if(flag==0)
    {
      for(int i=0;i<x.size();i++)
        cout<<x[i];
      return 0;
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            if(i==index)
            {
                v.push_back(8);
            }
            else if(i>index)
            {
                v.push_back(9);
            }
            else
            {
                v.push_back(z[i]);
            }
            t=t+v[i];
        }
        if(t>=sml)
        {
            for(int i=0;i<l;i++)
            {
                cout<<v[i];
            }
            return 0;
        }
        else
        {
            for(int i=0;i<x.size();i++)
                cout<<x[i];
            return 0;
        }
    }

}
