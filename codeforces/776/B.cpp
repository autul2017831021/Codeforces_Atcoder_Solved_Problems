#include<bits/stdc++.h>
using namespace std;
const int MX=99999999;
bool prime[MX];
vector<int>v;
bool isPrime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
main()
{
    int n,a=1,b=2;
    cin>>n;
    if(n==1 || n==2)
        cout<<a<<endl;
    else
        cout<<b<<endl;
    for(int i=1;i<=n;i++)
    {
        if(isPrime(i+1))
            cout<<a<<" ";
        else
            cout<<b<<" ";
    }
}
