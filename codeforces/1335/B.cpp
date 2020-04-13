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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        int x='a';
        for(int i=0;i<n;i++)
        {
            printf("%c",x);
            if(x+1<b+'a')
            {
                x++;
            }
            else
            {
                x='a';
            }
        }
        cout<<endl;
    }
}
