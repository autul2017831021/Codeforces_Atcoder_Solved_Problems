#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        int d=abs(b-a);
        int bal=min(a,b)-1;
        int sal=n-max(a,b);
        int m=bal+sal;
        //cout<<d<<endl<<m<<endl<<min(m,x)<<endl;
        d+=min(m,x);
        cout<<d<<endl;

    }

}
