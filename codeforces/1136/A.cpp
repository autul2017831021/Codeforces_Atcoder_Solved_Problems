#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c=0;
    cin>>n;
    int k;
    int l,r;
    vector<int>v,w;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        v.push_back(l);
        w.push_back(r);
    }
    cin>>k;
    /*
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<w[i]<<endl;
    }
    */
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<=k && w[i]>=k)
        {
            break;
        }
        else
            c++;
    }
    cout<<n-c<<endl;
}
