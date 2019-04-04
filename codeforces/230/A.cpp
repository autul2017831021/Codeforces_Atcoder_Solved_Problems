#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,s,x[10000],y[10000],c=1;
    cin>>s>>n;
    pair<int,int>a[100000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(s<=a[i].first)
        {
            c=0;
            break;
        }
        else
        {
            s=s+a[i].second;
            c++;
        }
    }
    if(c>0)
        cout<<"YES";
    else
        cout<<"NO";


}
