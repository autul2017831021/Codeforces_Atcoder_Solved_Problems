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
    int n,c=1;
    cin>>n;
    map<int,int>m;
    map<int,int>::iterator it;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(v.bg,v.en);
    for(int i=0;i<n;i++)
    {
        if(v[i]>=c)
            c=c+1;
    }
    cout<<c-1<<endl;
}
