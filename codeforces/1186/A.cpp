#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,k;
    cin>>n>>m>>k;
    /*if(m<n && k<n)
        cout<<"NO";
    else if(m>=n && k>=n)
        cout<<"Yes";
    else
    {

    }*/
    int mi=min(m,k);
    if(mi<n)
        cout<<"No";
    else
        cout<<"Yes";

}
