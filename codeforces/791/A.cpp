#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c=0;
    cin>>a>>b;
    while(1)
    {
      c++;
      a=a*3;
      b=b*2;
      if(a>b)
      {
          break;
      }
    }
    cout<<c;
}
