#include<bits/stdc++.h>
using namespace std;
main()
{
    int k,r,c=1;
    cin>>k>>r;
    while(1)
    {
        if((k*c)%10==r || (k*c)%10==0)
        {
            cout<<c;return 0;
        }
        else
            c++;
    }

}
