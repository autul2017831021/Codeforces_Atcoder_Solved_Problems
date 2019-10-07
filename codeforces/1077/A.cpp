#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    for(int o=0;o<t;o++)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        if(k%2==0)
        {
            cout<<(k/2)*(a-b)<<endl;
        }
        else
        {
            long long r=((k-1)/2)*(a-b);
            cout<<r+a<<endl;
        }
    }
}
