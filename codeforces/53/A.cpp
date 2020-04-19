using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
main()
{
    string s,t;
    int n,k=0;
    cin>>s>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        bool f=1;
        if(t.sz>=s.sz)
        {
            for(int j=0;j<s.sz;j++)
            {
                if(s[j]!=t[j])
                {
                    f=0;
                    break;
                }
            }
            if(f){
                v.pb(t);
            }
        }
    }
    sort(v.bg,v.en);
    //cout<<v.sz<<endl;
    if(v.sz>0)
    {
        cout<<v[0];
        r0;
    }
    cout<<s<<endl;
}
