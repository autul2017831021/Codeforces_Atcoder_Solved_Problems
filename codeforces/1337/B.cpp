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
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,n,m;
        cin>>x>>n>>m;
        for(int i=0;i<n;i++)
        {
            if(x>20)
            {
                x=x/2;
                x=x+10;
            }
            else
                break;
        }
        for(int i=0;i<m;i++)
            x=x-10;
        if(x<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

