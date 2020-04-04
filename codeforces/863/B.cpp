#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
#define inf 99999
using namespace std;
int main()
{
    int i,j,k;
    int n,m,sum=0;
    cin>>n;
    n=n*2;
    int a[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];

    m=inf;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=0;
            vector<int> v;
            for(k=0;k<n;k++)
            {
                if(k!=j && k!=i)
                    v.pb(a[k]);
            }
            sort(v.bg,v.en);
            for(k=0;k<v.sz;k+=2)
                sum+=(v[k+1]-v[k]);
            m=min(m,sum);
        }
    }
    cout<<m;
}
