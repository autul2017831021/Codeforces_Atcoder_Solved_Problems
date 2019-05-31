#include<bits/stdc++.h>
using namespace std;
long long fa(long long a)
{
    if(a==1)
        return 1;
    else
        return (a*fa(a-1));

}
long long fb(long long b)
{
    if(b==1)
        return 1;
    else
        return (b*fb(b-1));

}
main()
{
    long long a,b,x,y;
    cin>>a>>b;
    if(a>=b)
    {
       y=fb(b);
       cout<<y<<endl;
       return 0;
    }

    else
    {
        x=fa(a);
        cout<<x<<endl;
        return 0;
    }
}
