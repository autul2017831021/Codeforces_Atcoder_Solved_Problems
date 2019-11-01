#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long m=1e10,c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i]==v[j] || (abs(v[i]-v[j])%2)==0)
            {

            }
            else
            {
                c++;
            }
        }
        m=min(m,c);
        c=0;
    }
    cout<<m<<endl;
}
