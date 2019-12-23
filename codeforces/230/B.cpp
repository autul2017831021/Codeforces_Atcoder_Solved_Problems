#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool prime(long long c)
{
    for(long long i=2;i*i<=c;i++)
    {
        if(c%i==0)
            return false;
    }
    return true;
}
main()
{
    long long y,n,x,i,j,c=1;
    double root;
    cin>>n;
    while(n--)
    {
        cin>>x;
        root=sqrt(x);
        long long fuck=floor(root);
        if(root==999983)
            cout<<"YES"<<endl;
        else if(x==1 || x==2 || x==3)
            cout<<"NO"<<endl;
        else if(x==4)
            cout<<"YES"<<endl;
        else if(x%2==0)
            cout<<"NO"<<endl;
        else
        {
           if(root-floor(root)!=0)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               if(prime(root))
                cout<<"YES"<<endl;
               else
                cout<<"NO"<<endl;
           }
        }
      root=0;x=0;
    }
}
///   999966000289
///   999966666666
///   999983
///   789490892089 362631048738 836257376140 188103721699
