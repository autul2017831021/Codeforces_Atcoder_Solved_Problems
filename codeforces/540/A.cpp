#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    string a,b;
    cin>>n>>a>>b;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=min(abs(10-abs(a[i]-b[i])),abs(a[i]-b[i]));
    }
    cout<<ans<<endl;
}
