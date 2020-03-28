#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int>v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int k=0,c=0;
        sort(v.rbegin(),v.rend());
        if(v[0]>1 && v[1]>1)
        {
            for(int i=2;i<v.size();i++)
            {

                if(v[i]>0)
                    k++;
            }
            cout<<min(k,v[1]-1)<<endl;
        }
        else
            cout<<"0"<<endl;
    }
}
