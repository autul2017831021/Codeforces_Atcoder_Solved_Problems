#include <bits/stdc++.h>
using namespace std;
void primefactors(long long n,long long h,long long k)
{
    vector<int>v;
    while(n%2==0)
    {
        v.push_back(2);
        n/=2;
    }
    for(int i=3;i<=h;i=i+2)
    {
        while(n%i==0)
        {
            v.push_back(i);
            n=n/i;
        }
    }
    if(n>2)
        v.push_back(n);
    int l=v.size();
    /*
    for(int i=0;i<l;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    */
    if(l<k)
        cout<<"-1"<<endl;
    else if(l>k)
    {
        for(int i=0;i<k-1;i++)
        {
            cout<<v[i]<<" ";
        }
        int x=1;
        for(int i=k-1;i<l;i++)
        {
            x=x*v[i];
        }
        cout<<x<<endl;
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            cout<<v[i]<<" ";
        }
    }
}
int main()
{
    long long n,k;cin>>n>>k;long long h=sqrt(n);
    primefactors(n,h,k);
    return 0;
}
