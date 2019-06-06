#include<bits/stdc++.h>
using namespace std;
main()
{
    int a,b,c=0;
    cin>>a>>b;
    int sum=a;
    while(1)
    {
        c=a/b;
        a=c+(a%b);
        sum=sum+c;
        if(c<=0)
            break;
    }

    cout<<sum<<endl;
}
