#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i;
    cin>>n;
    if(n==1)
    {
        cout<<"I hate it";
        return 0;

    }
    else if(n==2)
    {
        cout<<"I hate that I love it";
        return 0;
    }
    else{


            for(i=1;i<=n;i++)
              {
               if(i%2==0)
                {
                    cout<<"I love ";
                    if(i==(n))
                    {
                        break;
                    }
                }
               else
               {
                 cout<<"I hate ";
                  if(i==(n))
                    {
                        break;
                    }

               }
                cout<<"that ";
              }
              cout<<"it";

        }

}
