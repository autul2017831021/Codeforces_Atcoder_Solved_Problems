#include <bits/stdc++.h>
using namespace std;
void primeFactors(long long n)
{
    set<long long>s;
    set<long long>::iterator it;
    long long ans=1;
    while (n%2==0)
    {
        //cout<<2<<" ";
        s.insert(2);
        n=n/2;
    }
    for (long long i=3;i<=sqrt(n);i=i+2)
    {
        // While i divides n, print i and divide n
        while (n%i==0)
        {
            //cout<<i<<" ";
            s.insert(i);
            n=n/i;
        }
    }
    if (n>2){
       //cout<<n<<" ";
       s.insert(n);
    }
    for(it=s.begin();it!=s.end();it++)
    {
        ans*=(*it);
    }
    cout<<ans<<endl;
}
int main()
{
    long long n;
    cin>>n;
    primeFactors(n);
    return 0;
}
