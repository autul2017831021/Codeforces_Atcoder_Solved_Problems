#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m=0;
    string s;
    cin>>n>>s;
    set<char>st;
    vector<bool>b(200,0);
    for(int i=0;i<n;i++)
    {
        char x=s[i];
        int v=x;
        if(v>=97 && v<=122)
        {
            st.insert(x);
        }
        else
        {
            int bal=st.size();
            m=max(m,bal);
            st.clear();
        }
    }
    int bal=st.size();
    m=max(m,bal);
    cout<<m;
}
