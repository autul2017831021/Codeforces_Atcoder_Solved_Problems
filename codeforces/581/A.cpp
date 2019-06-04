#include<bits/stdc++.h>
using namespace std;
main()
{
    int r,b,x=0,y=0;
    cin>>r>>b;
    if(r==b)
    {
        cout<<r<<" "<<y<<endl;
        return 0;
    }
    else
    {
      if(r>b)
      {
          x=b;
          y=(r-b)/2;
      }
      else
      {
          x=r;
          y=(b-r)/2;
      }
    }
    cout<<x<<" "<<y<<endl;
}
