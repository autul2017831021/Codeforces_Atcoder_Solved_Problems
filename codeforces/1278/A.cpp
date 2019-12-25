#include<bits/stdc++.h>
using namespace std;
void ans(string s,string t)
{
    vector<int>cp(26);
    for(int i=0;i<s.size();i++)
    {
        ++cp[s[i]-'a'];
    }
    for(int i=0;i<t.size();i++)
    {
        vector<int>ct(26);
        for(int j=i;j<t.size();j++)
        {
            ++ct[t[j]-'a'];
            if(cp==ct)
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
    return;
}
main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        if(s.size()>t.size())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            ans(s,t);
        }
    }
}
