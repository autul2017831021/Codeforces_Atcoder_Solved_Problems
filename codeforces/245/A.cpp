#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,pap=0,pam=0,pbp=0,pbm=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t,x,y;
        cin>>t>>x>>y;
        if(t==1)
        {
            pap+=x;
            pam+=y;
        }
        else
        {
            pbp+=x;
            pbm+=y;
        }
    }
    if(pap>=pam)
        cout<<"LIVE"<<endl;
    else
        cout<<"DEAD"<<endl;
    if(pbp>=pbm)
        cout<<"LIVE"<<endl;
    else
        cout<<"DEAD"<<endl;
}
