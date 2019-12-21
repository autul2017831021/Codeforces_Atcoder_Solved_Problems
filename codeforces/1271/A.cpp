#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c,d,x,y,sum=0;
    cin>>a>>b>>c>>d>>x>>y;
    int m1=min(min(b,c),d);
        sum=m1*y;
        if((d-m1)>0)
        {
            int m2=min(a,d-m1);
            sum=sum+m2*x;
            //cout<<sum<<endl;
        }
    int m2=min(a,d);
        int sum1=m2*x;
        if(d-m2>0)
        {
            m1=min(min(b,c),d-m2);
            sum1=sum1+m1*y;
            //cout<<sum1<<endl;
        }
        cout<<max(sum,sum1)<<endl;
}
