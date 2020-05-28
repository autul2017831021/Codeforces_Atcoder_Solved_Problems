/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

main()
{
    int ts;cin>>ts;
    while(ts--)
    {
        ll n,m,k;cin>>n>>m>>k;
        ll dudu=n/k;
        if(m==n || m==0)
        {
            cout<<"0"<<endl;
        }
        else if(dudu>=m)
        {
            cout<<m<<endl;
        }
        else{
        m=m-dudu;ll sal=0;
        while(1)
        {
            sal++;
            for(int j=0;j<k-1;j++)
            {
                if(m>0)
                {
                    m--;
                }
            }
            if(m==0)
            {
                break;
            }
        }
        cout<<dudu-sal<<endl;
        }
    }
}
