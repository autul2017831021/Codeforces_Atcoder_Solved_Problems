#include<bits/stdc++.h>
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
int main()
{
    int tt;cin>>tt;
    for(int j=0;j<tt;j++)
    {
        ll a=0,b=0,c=0,n;ne n;
        ll i=1;
        bool f=1;
        for(int i=0;i<=(n/3);i++){
            ll dd=3*i;
            ll m=n;m=m-dd;
            if(m%5==0){
                b=m/5;
                c=0;
                f=0;
            }
            else if(m%7==0){
                c=m/7;
                b=0;f=0;
            }
            else if(m%35==0){
                b=0;c=0;
                while(m%5==0 && m>0){
                    b++;m/=5;
                }
                while(m%7==0 && m>0){
                    c++;m/=7;
                }
                f=0;
            }
            a=i;
            if(!f)break;
        }
        if(!f){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            mone;
        }
    }
}
