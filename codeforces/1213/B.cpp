#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,c=0,x=INT_MAX;
        cin>>n;
        vector<long long>v;
        vector<long long>w;
        for (long long i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);

        }
          for(int i=n-1;i>=0;i--)
          {
              if(v[i]>x)
                c++;
              x=min(v[i],x);
          }
          cout<<c<<endl;
    }
}
