#include<bits/stdc++.h>
///sdgsdg
using namespace std;
typedef  long long ll;
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
#define inf 1000000000000
#define ninf -1000000000
#define its (*it).S
#define itf (*it).F
#define nl printf("\n")
#define sp printf(" ")
#define yes printf("YES\n")
#define no printf("NO\n")
#define mone printf("-1\n")
#define ne cin>>
#define de cout<<
#define hoynai cout<<"hoynai"<<endl;
#define modd 1000000007
#define FAST_FUCK ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
/// priority_queue<ll,vector<ll>,greater<ll> >
int main()
{
    int tt;cin>>tt;
    for(int j=0;j<tt;j++)
    {
        ll n,k;
        vc vv;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            ll c;ne c;
            vv.pb(c);
        }sort(vv.rbg,vv.ren);
        for(int i=0;i<k;i++){
            vv[0]=vv[0]+vv[i+1];
            vv[i+1]=0;
        }
        ll d=*max_element(vv.bg,vv.en)-*min_element(vv.bg,vv.en);
        cout<<d<<endl;
    }
}
