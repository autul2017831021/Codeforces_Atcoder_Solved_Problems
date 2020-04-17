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
    int n,w,b,a=0;
    cin>>n>>w>>b;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    bool f=1;
    int mi=min(w,b);
    for(int i=0;i<=(n-1)/2;i++)
    {
        if( (v[i]==0 && v[n-1-i]==1) || (v[i]==1 && v[n-i-1]==0) )
        {
            f=0;
            break;
        }
        else
        {
            int bal=min(v[i],v[n-i-1]);
            //cout<<bal<<endl;
            if(bal==0 && v[i]!=v[n-i-1])
            {
                a=a+w;
            }
            else if(bal==1 && v[i]!=v[n-i-1])
            {
                a=a+b;
            }
            else if(bal==2)
            {
                if(i!=(n-i-1))
                {
                    a=a+2*mi;
                }
                else
                    a=a+mi;
            }
        }
    }
    if(f)
        cout<<a<<endl;
    else
        cout<<"-1"<<endl;
}
