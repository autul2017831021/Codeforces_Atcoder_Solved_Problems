#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<pair<ll,ll> > vp;
typedef vector<ll> vc;
typedef map<ll,ll> ml;
typedef ostringstream OS ;
typedef stringstream SS ;
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
string ntos(ll n) {
     OS str1 ;
     str1 << n ;
     return str1.str();
}
ll ston(string s) {
     ll x ;
     SS str1(s);
     str1 >> x ;
     return x ;
}
char a1[3]={'R','G','B'};
char b1[3]={'G','B','R'};
char c1[3]={'B','R','G'};
main()
{
    int q;
    cin>>q;
    for(int iii=0;iii<q;iii++)
    {
        ll n;
        cin>>n;
        ll a=0,b=0,an=0;
        if(n==2)
        {
            cout<<"2";nl;
            continue;
        }
        for(int i=1;i<n;i++)
        {
            if(i<n/2)
            {
                a=a+pow(2,i);
            }
            else
            {
                b=b+pow(2,i);
            }
            if(i==n-1)
            {
                a=a+pow(2,n);
            }
        }
        an=abs(a-b);
        cout<<an;nl;
    }
}
