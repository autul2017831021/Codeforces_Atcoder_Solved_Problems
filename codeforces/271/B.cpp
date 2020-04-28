#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
typedef map<ll,ll> ml;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
const int MX=99999999;
bool prime[MX];
vector<int>v;
bool isPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
void sieve(int M)
{
    prime[0]=prime[1]=true;
    for(int i=4;i<=M;i=i+2)
        prime[i]=true;
    for(int i=3;i<=sqrt(M);i=i+2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=M;j=j+2*i)
                prime[j]=true;
        }
    }
    v.push_back(2);
    for(int i=3;i<=M;i=i+1)
        {
            if(prime[i]==false)
            {
                v.push_back(i);
            }
        }
    //cout<<"Number of Prime Numbers between "<<M<<" are:"<<v.size()<<endl;
}
main()
{
    int r,c,ans=0;
    vector<int>w;
    cin>>r>>c;
    int a[r][c]={0};
    sieve(110000);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int x=a[i][j];
            if(x==1)
            {
                ans=ans+1;
            }
            else if(isPrime(x))
            {
                ans=ans+0;
            }
            else{
                int ub=upper_bound(v.bg,v.en,x)-v.bg;
                int d=abs(x-v[ub]);
                ///cout<<"Column wise upperbound = "<<v[ub]<<endl;
                ans+=d;
            }
        }
        ///cout<<"ans row-wise = "<<ans<<endl;
        w.pb(ans);
        ans=0;
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            int x=a[j][i];
            if(x==1)
            {
                ans+=1;
            }
            else if(isPrime(x))
            {
                ans=ans+0;
            }
            else{
                int ub=upper_bound(v.bg,v.en,x)-v.bg;
                //cout<<"Column wise upperbound = "<<v[ub]<<endl;
                int d=abs(x-v[ub]);
                ans+=d;
            }
        }
        ///cout<<"ans column-wise = "<<ans<<endl;
        w.pb(ans);
        ans=0;
    }
    cout<<*min_element(w.bg,w.en);nl;
}
