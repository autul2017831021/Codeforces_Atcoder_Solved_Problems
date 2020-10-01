#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
#define inf 10000000000
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
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,k,ans=1;cin>>n>>k;
        vc v;
        set<ll>s;set<ll>::iterator it;
        for(int i=0;i<n;i++){
            ll c;ne c;s.insert(c);
        }
        ll bal=s.sz;
        if(k==1){
            if(s.sz==1){
                de ans;nl;
            }
            else{
                mone;
            }
            continue;
        }
        ans=1;
        ll ager=0;
        for(it=s.bg;it!=s.en;it++){
            ager++;
            bal--;
            if(ager==k && bal!=0){ans++;ager=1;}
        }
        de ans;nl;
    }
}
