#include<bits/stdc++.h>
using namespace std;
main()
{
    int i,j,m,n,k,ans;

    for (i=1; i<=5; i++)
    {
        for (j=1; j<=5; j++)
        {
            scanf ("%d",&k);

            if (k == 1)
            {
                m = i;
                n = j;
            }
        }
    }
    ans = abs(3-m)+abs(3-n);
    cout<<ans;
}
