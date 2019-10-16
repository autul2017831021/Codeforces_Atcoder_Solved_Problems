#include<bits/stdc++.h>
using namespace std;
main()
{
    int hh,mm,a,s1,s2,m,h;
    char c;
    cin>>hh>>c>>mm>>a;
    s1=mm+a;
    m=s1%60;
    s1=s1/60;
    s2=hh+s1;
    h=s2%24;
    if(h<10 && m<10)
    {
        cout<<"0"<<h<<":"<<"0"<<m;
    }
    else if(h<10 && m>=10)
    {
        cout<<"0"<<h<<":"<<m;
    }
    else if(h>=10 && m<10)
    {
        cout<<h<<":"<<"0"<<m;
    }
    else
        cout<<h<<":"<<m;

}
