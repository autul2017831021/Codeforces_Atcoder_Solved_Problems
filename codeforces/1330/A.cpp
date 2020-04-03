#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
#define M map<ll,ll>
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        M mp;
        for(int i=0;i<n;i++)
        {
            ll xx;
            cin>>xx;
            mp[xx]=1;
        }
        ll ans=0;
        for(int i=1;;i++)
        {
            if(mp[i]==0 && x==0)
                break;
            else if(mp[i]==0)
            {
                x--;
            }
            ans++;
        }
        cout<<ans<<endl;
    }

}
