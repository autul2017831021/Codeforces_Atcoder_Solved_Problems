#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,c;
    cin>>n>>c;
    long long l=0,r=0,bal=0,sal=0;
    pair<long long,long long>p[n+1];
    pair<long long,long long>f[n+1];
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        p[i].first=x;
    }
    for(int i=0;i<n;i++)
    {
       long long x;
       cin>>x;
       p[i].second=x;
    }
    for(int i=0;i<n;i++)
    {
       signed long long a,b,ans;
       a=p[i].first;
       b=p[i].second;
       if(i>0)
       {
           bal=bal+p[i-1].second;
           b=b+bal;
           ans=a-c*b;
       }
       else
        ans=a-c*b;
       long long xx=max((long long)0,ans);
       l+=xx;
    }
    int k=0;
    for(int i=n-1;i>=0;i--)
    {
        f[k].first=p[i].first;
        f[k].second=p[i].second;
        k++;
    }
    for(int i=0;i<n;i++)
    {
       signed long long a,b,ans;
       a=f[i].first;
       b=f[i].second;
       if(i>0)
       {
          sal=sal+f[i-1].second;
          b=b+sal;
          ans=a-c*b;
       }
       else
        ans=a-c*b;
        long long xx=max((long long)0,ans);
        r+=xx;
    }
    if(l==r)
    {
        cout<<"Tie"<<endl;
    }
    else if(l>r)
    {
        cout<<"Limak"<<endl;
    }
    else
        cout<<"Radewoosh"<<endl;
}
