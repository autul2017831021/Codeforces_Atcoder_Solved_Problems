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
    int n,k;
    cin>>n>>k;
    int a[n+1]={0};
    int c=0,b=INT_MAX;
    a[1]=1;
    for(int i=2;i<=n;i++){
        if(c<k){
            a[i]=i;
        }
        else{
            b=min(b,i);
            if(i==n){
                a[i]=1;a[1]=b;
            }
            else{
                a[i]=i+1;
            }
        }
        c++;
    }
    if(n==k){mone;r0}
    for(int i=1;i<=n;i++){de a[i];sp;}
}
