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
    int n;
    cin>>n;
    map<int,int>m;
    map<int,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        a=a*60;
        a=a+b;
        m[a]++;
    }
    int ma=1;
    for(it=m.bg;it!=m.en;it++)
    {
        ma=max(ma,(*it).second);
    }
    cout<<ma<<endl;
}


