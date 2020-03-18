#include<bits/stdc++.h>
using namespace std;
main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int d=abs(x-y);
    if(z!=0)
    {
       if(z+min(x,y)>=max(x,y) || x==y) {cout<<"?"<<endl;}
       else
       {
           if(x>y)
            cout<<"+"<<endl;
           else if(x<y)
            cout<<"-"<<endl;
       }
    }
    else if(x==y)
    {
        cout<<"0"<<endl;
    }
    else if(x>y)
    {
        cout<<"+"<<endl;
    }
    else if(x<y)
    {
        cout<<"-"<<endl;
    }
}
