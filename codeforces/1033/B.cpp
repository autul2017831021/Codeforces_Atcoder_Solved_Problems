#include<bits/stdc++.h>
using namespace std;
bool prime(long long c)
{
    for(long long i=2;i*i<=c;i++)
    {
        if(c%i==0)
            return false;
    }
    return true;
}
main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        long long a,b,x,y,c;
        cin>>a>>b;
        c=a+b;
        if(c==2 || c==3)
            cout<<"YES"<<endl;
        else if((a-b)==1)
        {
            if(prime(c))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
