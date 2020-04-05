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
    ll n,m;
    cin>>n>>m;
    ll bal=n*(n-1);
    bal=bal/2;
    ll a[11]={0};
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=m;i++)
    {
        if(a[i]>1)
        {
            ll sal=a[i]*(a[i]-1);
            sal=sal/2;
            bal=bal-sal;
        }
    }
    cout<<bal;
}

