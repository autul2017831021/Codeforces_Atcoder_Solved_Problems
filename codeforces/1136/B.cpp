#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,m=0;
    cin>>n>>k;
    bool f[10000];
    int l,r;
    l=k-1;
    r=n-k;
    cout<<3*n+min(l,r);
}
