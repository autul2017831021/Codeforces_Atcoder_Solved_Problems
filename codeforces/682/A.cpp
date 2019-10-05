#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,m,a,b,r,k1=1,k2=1,k3=1,k4=1,k5=1,x1=0,x2=0,x3=0,x4=0,x5=0;
    cin>>n>>m;
    a=min(n,m);
    b=max(n,m);
    vector<long long>a1;
    vector<long long>a2;
    vector<long long>a3;
    vector<long long>a4;
    vector<long long>a5;
    for(int i=1;i<=a;i++)
    {
        if(i%5==1)
        {
           a1.push_back(-1+5*k1);
           k1++;
        }
        if(i%5==2)
        {
           a2.push_back(-2+5*k2);
           k2++;
        }
        if(i%5==3)
        {
           a3.push_back(-3+5*k3);
           k3++;
        }
        if(i%5==4)
        {
           a4.push_back(-4+5*k4);
           k4++;
        }
        if(i%5==0)
        {
           a5.push_back(5*k5);
           k5++;
        }
    }
    for(int i=1;i<=b;i++)
    {
        if(i%5==1)
        {
          x1++;
        }
        if(i%5==2)
        {
          x2++;
        }
        if(i%5==3)
        {
           x3++;
        }
        if(i%5==4)
        {
           x4++;
        }
        if(i%5==0)
        {
           x5++;
        }
    }
    r=x4*a1.size()+x3*a2.size()+x2*a3.size()+x1*a4.size()+x5*a5.size();
    cout<<r<<endl;
    ///cout<<x4<<" "<<a1.size()<<" "<<x3<<" "<<a2.size()<<" "<<x2<<" "<<a3.size()<<" "<<x1<<" "<<a4.size()<<" "<<x5<<" "<<a5.size();
    return 0;
}
