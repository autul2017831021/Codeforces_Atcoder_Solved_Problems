using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
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
char a1[3]={'R','G','B'};
char b1[3]={'G','B','R'};
char c1[3]={'B','R','G'};
main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        if((x==0 && y==0))
        {
            cout<<"0"<<endl;
        }
        else if(x==0)
        {
            cout<<y*a<<endl;
        }
        else if(y==0)
        {
            cout<<x*a<<endl;
        }
        else
        {
            ll mi=min(x,y);
            ll d=abs(x-y);
            if( (2*mi)*a <= (mi)*b )
            {
                cout<<(x+y)*a<<endl;
            }
            else
            {
                cout<<mi*b+d*a<<endl;
            }
        }
    }
}
