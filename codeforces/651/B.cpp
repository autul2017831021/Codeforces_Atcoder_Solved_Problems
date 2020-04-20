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
    int n,c=0,m=0;
    cin>>n;
    vector<int>a(1000,0);
    vector<int>w;
    map<int,int>s;
    map<int,int>::iterator it;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s[x]++;
        m=max(m,s[x]);
    }
    for(it=s.bg;it!=s.en;it++)
    {
        v.pb({(*it).F,(*it).S});
    }
    sort(v.bg,v.en);
    /*
    cout<<"m="<<m<<endl;
    for(int i=0;i<v.sz;i++)
    {
        cout<<v[i].F<<" "<<v[i].S<<endl;
    }
    */
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<v.sz;j++)
        {
            if(v[j].S>0)
            {
                w.pb(v[j].F);
                v[j].S--;
            }
        }
    }
    for(int i=1;i<w.sz;i++)
    {
        //cout<<w[i]<<" ";
        if(w[i]>w[i-1])
            c++;
    }
    cout<<c<<endl;
}
