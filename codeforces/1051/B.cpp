#include<bits/stdc++.h>
using namespace std;

main()
{
    long long r,l,sub=0;
    cin>>l>>r;
    sub=(r-l+1)/2;
    //cout<<sub;return 0;
    puts("YES");
    for(int i=0;i<sub;i++)
    {
        cout<<l+2*i<<" "<<l+2*i+1<<endl;
    }

}
