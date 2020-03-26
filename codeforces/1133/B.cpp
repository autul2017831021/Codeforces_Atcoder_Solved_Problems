#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,z=0,c=0;
    cin>>n>>k;
    vector<int>v(k);

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int m=x%k;
        if(m==0)
            z++;
        else
            v[x%k]++;
    }
    z=z/2;
    z*=2;
    for(int i=1;i<=(k)/2;++i)
    {
        if(i==(k-i)){
            c+=v[i]/2;
        }
        else
        {
           c+=min(v[i],v[k-i]);
        }
    }
    c=c*2;
    cout<<z+c<<endl;
}
