#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(m[s[i]]>k)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
