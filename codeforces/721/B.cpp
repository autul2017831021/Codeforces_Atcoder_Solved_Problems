#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,big=0,sml=0,x=0,y=0;
    cin>>n>>k;
    vector<string>v;
    string st;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    cin>>st;
    int l=st.size();
    for(int i=0;i<n;i++)
    {
        if(v[i].size()>l)
            big++;
        else if(l>v[i].size())
            sml++;
    }
    n--;
    int d=sml/k;
    x=sml+5*d+1;
    n=n-big;
    int dd=n/k;
    y=n+5*dd+1;
    cout<<x<<" "<<y<<endl;
}
