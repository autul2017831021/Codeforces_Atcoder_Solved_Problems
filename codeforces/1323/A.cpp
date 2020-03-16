#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,o=0,ei;bool f=0;
        cin>>n;
        int a[1001];vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
            {
                o++;
                v.push_back(i+1);
            }
            else
            {
                ei=i+1;
                f=1;
            }
        }
        if(f)
        {
            cout<<"1"<<endl<<ei<<endl;
        }
        else if(o>=2)
        {
            cout<<"2"<<endl<<v[0]<<" "<<v[1]<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
}
