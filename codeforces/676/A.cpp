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
#define r0 return 0;
#define F first
#define S second
#define inf 9999999999
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
char a1[3]={'R','G','B'};
char b1[3]={'G','B','R'};
char c1[3]={'B','R','G'};
main()
{
    ll n,x;
    cin>>n;
    vp v;
    v.pb({0,0});
    ll ma,mi,in,im;
    ma=-1;mi=inf;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.pb({x,i+1});
        if(x==1)
            im=i+1;
        if(x==n)
            in=i+1;
    }
    ll bal,sal;
    bal=max(im,in);
    sal=min(im,in);
    ll d=max((sal-1),(n-bal));
    d+=(bal-sal);
    cout<<d;nl;
}
