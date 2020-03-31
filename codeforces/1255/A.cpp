#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t;
    cin>>t;
    while(t--)
    {
        int a,b,k;
        cin>>a>>b;
        k=abs(a-b);
        int c=0;
        m=k/5;
        k-=(5*m);
        c+=m;
        m=k/2;
        k-=(2*m);
        c+=m;
        c+=k;
        cout<<c<<endl;
    }
}
