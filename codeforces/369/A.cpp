#include<bits//stdc++.h>
using namespace std;
main()
{
    int n,b,p,one=0,two=0,a[1000],wash=0;
    cin>>n>>b>>p;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
             if(b<=0)
            {
               wash++;
            }
            else
                b--;

        }
        else
        {
            if(p<=0)
            {
              if(b<=0)
              {
                wash++;
              }
              else
                b--;
            }

            else
                p--;
        }
    }
    cout<<wash<<endl;
}
