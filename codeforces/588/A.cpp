#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int x=1000;
    pair<int,int>p[n+10];
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        p[i].first=a;
        p[i].second=b;
        x=min(x,b);
    }
    int c=0;
    c=p[1].first*p[1].second;
    //cout<<"c->"<<c<<endl;
    x=p[1].second;
    //for(int i=1;i<=n;i++)
      //  cout<<p[i].first<<" "<<p[i].second<<endl;
    for(int i=2;i<=n;i++)
    {
        if(p[i].second<x)
        {
            x=p[i].second;
            c+=(p[i].first*x);
            //cout<<p[i].first<<" "<<x<<endl;
            //cout<<"if C->"<<c<<endl;
        }
        else{
            c+=(p[i].first*x);
            //cout<<p[i].first<<" "<<x<<endl;
            //cout<<"else->"<<c<<endl;
        }
    }
    cout<<c<<endl;
}
