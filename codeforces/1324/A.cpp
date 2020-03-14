#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int o=0,e=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==0)
                e++;
            else
                o++;
        }
        if(o==n)
            cout<<"YES"<<endl;
        else if(e==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
