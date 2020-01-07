#include<bits/stdc++.h>
using namespace std;
bool fibo[1000001];
void bal(long long n)
{
    long long a=1,b=2,c,t=0;
    fibo[1]=true;fibo[2]=true;
    for(long long i=1;i<=n;i++)
    {
            c=a+b;
            fibo[c]=true;
            a=b;
            b=c;
            if(c>1001)
                break;
    }
}
int main()
{
    long long n;
    cin>>n;
    bal(n);
    for(long long i=1;i<=n;i++)
    {
        if(fibo[i])
            cout<<"O";
        else
            cout<<"o";
    }
}
