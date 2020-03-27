#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int q=101;
pair<bool,int>boy[q];
pair<bool,int>girl[q];
int bb[q],gg[q];
main()
{
    ll n;
    cin>>n;
    vector<ll>v(n),x,y;
    ll a[n+1];
    for(ll i=0;i<n;i++){
        cin>>v[i];
        a[i]=v[i];
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(v[i]==a[j])
            {
                ll xx;
                xx=a[i];
                a[i]=v[i];
                a[j]=xx;
                x.push_back(i);
                y.push_back(j);
                break;
            }
        }
    }
    cout<<x.size()<<endl;
    for(ll i=0;i<x.size();i++)
    {
        cout<<x[i]<<" "<<y[i]<<endl;
    }
}
