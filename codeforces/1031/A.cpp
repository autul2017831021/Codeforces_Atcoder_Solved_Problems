#include<bits/stdc++.h>
using namespace std;
main()
{
    int w,h,k,c=0;
    cin>>w>>h>>k;
    for(int i=0;i<k;i++)
    {
        c=c+(2*(w-1) + 2*(h-1));
        w=w-4;
        h=h-4;
    }
    cout<<c<<endl;
}
