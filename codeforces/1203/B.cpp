#include<bits/stdc++.h>
using namespace std;
int main()
{
int q;
cin>>q;
while(q--)
{
    long long n;
    vector<long long>v;
    cin>>n;
    for(int i=0;i<4*n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    bool f=1;
    long long area=v[0]*v.back();
    for(int i=0;i<n;i++)
    {
        long long l,r;
        l=2*i;
        r=4*n-(2*i)-1;
        if(v[l]!=v[l+1] || v[r]!=v[r-1] || v[l]*v[r]!=area)
        {
            f=0;
            break;
        }
    }
    if(f)
       cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}
