#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
main()
{
    int t;cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       if(a<b)
        swap(a,b);
       if(gcd(a,b)==1)
        cout<<"Finite"<<endl;
       else
        cout<<"Infinite"<<endl;
    }


}
