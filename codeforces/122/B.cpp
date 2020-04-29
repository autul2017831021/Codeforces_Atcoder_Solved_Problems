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
main()
{
    string st;
    cin>>st;
    int f=0,s=0;
    for(int i=0;i<st.sz;i++)
    {
        if(st[i]=='7')
            s++;
        else if(st[i]=='4')
            f++;
    }
    if(s==0 && f==0)
    {
        cout<<"-1";
        r0;
    }
    else if(f>=s)
        cout<<"4";
    else
        cout<<"7";
}

