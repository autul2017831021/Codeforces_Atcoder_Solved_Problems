#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll l,r,k,j=1,ans=1;
    cin>>l>>r>>k;
    ans=k;
    vector<ll>v,x;
    if(1>=l && 1<=r)
        v.push_back(1);
    if(k>=l && k<=r)
        v.push_back(k);
    while(1)
    {
        ans=ans*k;
        if(ans%k==0)
        {
            if(ans>=l && ans<=r)
            {
                v.push_back(ans);
            }
            else if(ans>r)
            {
                break;
            }
        }
        else
            break;
    }
    if(v.size()==0)
        cout<<"-1";
    else
    {
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    }
}
