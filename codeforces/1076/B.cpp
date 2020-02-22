#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(ll x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
ll printDivisors(long long n,long long h)
{
    vector<long long>v;
    long long e=0,o=0;
    for(long long i=1;i<=h;i++)
    {
        if(n%i==0)
        {
            if(n/i==i){
                v.push_back(i);
            }
            else {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(long long i=1;i<v.size();i++)
    {
        ll x=v[i];
        if(isPrime(x))
        {
            return x;
        }
    }
    return e;
}
main()
{
    ll n,c=0,ans=0;
    cin>>n;
    ll h=sqrt(n);
    ans=printDivisors(n,h);
    if(isPrime(n))
    {
       cout<<"1"<<endl;
    }
    else if(n%2==0){
        c=n/2;
        cout<<c<<endl;
    }
    else
    {
        n=n-ans;
        c=n/2;
        c++;
        cout<<c<<endl;
    }

}
