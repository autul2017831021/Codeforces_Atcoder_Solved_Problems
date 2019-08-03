#include<bits/stdc++.h>
using namespace std;
main()
{
    long long a,i,j,c=0;
    cin>>a;
    while(1)
    {
        if(a>=100)
        {
            c=c+a/100;
            a=a%100;
            ///cout<<"c a:"<<c<<" "<<a<<endl;
        }
        else if(a>=20)
        {
            c=c+a/20;
            a=a%20;
            ///cout<<"c a:"<<c<<" "<<a<<endl;
        }
        else if(a>=10)
        {
            c=c+a/10;
            a=a%10;
            ///cout<<"c a:"<<c<<" "<<a<<endl;
        }
        else if(a>=5)
        {
            c=c+a/5;
            a=a%5;
            ///cout<<"c a:"<<c<<" "<<a<<endl;
        }
        else{
            c=c+a;
            a=0;
            ///cout<<"c a:"<<c<<" "<<a<<endl;
        }
        if(a==0)
            break;
    }
    cout<<c<<endl;
}
