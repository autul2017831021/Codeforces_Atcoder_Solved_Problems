#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    bool f=0;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
       string s;
       cin>>s;
       v.push_back(s);
    }
    cout<<"NO"<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i]==v[j])
            {
                f=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(!f)
            cout<<"NO"<<endl;
        f=0;
    }
}
