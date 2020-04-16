using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
const int MX=99999999;
bool prime[MX];
vector<int>v;
void sieve(int M,int nn)
{
    prime[0]=prime[1]=true;
    for(int i=4;i<=M;i=i+2)
        prime[i]=true;
    for(int i=3;i<=sqrt(M);i=i+2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<=M;j=j+2*i)
                prime[j]=true;
        }
    }
    v.push_back(2);
    for(int i=3;i<=M;i=i+1)
        {
            if(prime[i]==false)
            {
                v.push_back(i);
            }
        }
       for(int i=0;i<nn;i++)
            cout<<v[i]<<" ";
            cout<<endl;
}
main()
{
    int n;
    cin>>n;
    sieve(10000000,n);
}


