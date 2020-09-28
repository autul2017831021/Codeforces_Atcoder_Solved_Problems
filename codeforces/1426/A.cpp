#include<bits/stdc++.h>
using namespace std;
//asgas
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,x,bal=1;
        cin>>n>>x;

        if(n>2)
        {
            n = n-2;
            if(n%x==0)
            {
                 bal+=(n/x);
                cout<<bal;
            }
            else
            {
                bal+=(n/x)+1;
                cout<<bal;
            }
        }
        else
        {
            cout<<1;
        }
        cout<<endl;
    }
}
