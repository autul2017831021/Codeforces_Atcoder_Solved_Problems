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
    string s[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    string d;
    cin>>d;
    int k,in=0;
    cin>>k;
    for(int i=0;i<12;i++)
    {
        if(s[i]==d)
        {
            in=i;
            break;
        }
    }
    if(k==0)
    {
        cout<<d;
        r0
    }
    while(1)
    {
        in++;
        in=in%12;
        k--;
        if(k==0)
        {
            break;
        }
    }
    cout<<s[in];
}
