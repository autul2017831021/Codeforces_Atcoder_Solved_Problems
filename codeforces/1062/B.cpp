#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
main()
{
    int n,mo=0,num=1;
    cin>>n;
    map<int,int>m;
    map<int,int>::iterator it;
    vector<int>v,e;
    if(n==1)
    {
        cout<<"1 0";
        r0;
    }
    while (n%2==0)
    {
        m[2]++;
        n=n/2;
    }
    for (long long i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            m[i]++;
            n=n/i;
        }
    }
    if (n>2)
       m[n]++;
    for(it=m.bg;it!=m.en;it++)
    {
        v.pb((*it).second);
        e.pb((*it).first);
    }
    int beshi=*max_element(v.bg,v.en);
    for(int i=0;i<e.sz;i++)
    {
        //cout<<e[i]<<" "<<v[i]<<endl;
        num=num*e[i];
    }
    cout<<num<<" ";
    if(beshi==1)
    {
        cout<<mo<<endl;
        return 0;
    }
    bool ok=1;
    for(int i=0;i<v.sz;i++)
    {
        if(v[i]!=beshi)
        {
            ok=0;
            break;
        }
    }
    if(ok)
    {
        //cout<<"ok"<<endl;
        double dudu=beshi;
        double loga=log2(dudu);
        //cout<<"log->"<<loga<<endl;
        double bal=loga-ceil(loga);
        //cout<<"dif->"<<bal<<endl;
        if(bal==0)
        {
            cout<<(int)loga;
            r0;
        }
        else
            cout<<(int)loga+2;
    }
    else
    {
        double dudu=beshi;
        double loga=log2(dudu);
        //cout<<"log->"<<loga<<endl;
        double bal=loga-floor(loga);
        //cout<<"diff->"<<bal<<endl;
        if(bal==0)
        {
            cout<<(int)loga+1;
            r0;
        }
        else
            cout<<(int)loga+2;
    }
}
