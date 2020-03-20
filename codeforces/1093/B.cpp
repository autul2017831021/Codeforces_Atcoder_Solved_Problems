#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<char>v,w;
        set<char>st;
        for(int i=0;i<s.size();i++)
        {
            char c;
            c=s[i];
            st.insert(c);
            v.push_back(c);
        }
        if(st.size()==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++)
                cout<<v[i];
            cout<<endl;
        }
    }
}
