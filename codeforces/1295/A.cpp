#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a,b,c,d;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a%2==0)
        {
          while(1){
            cout<<"1";
            a=a-2;
            if(a==0)
                break;
          }
        }
        else
        {
            a=a-3;
            cout<<"7";
            if(a!=0){
             while(1)
             {
                cout<<"1";
                a=a-2;
                if(a==0)
                   break;
             }
            }
        }
        cout<<endl;
    }
}
