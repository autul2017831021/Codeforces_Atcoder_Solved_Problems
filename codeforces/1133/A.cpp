#include<bits/stdc++.h>
using namespace std;
main()
{
    int h,m,g,s;char c;
    cin>>h>>c>>m>>g>>c>>s;
    int ms=(m+s)/2;
    int hh=(h+g)/2;
    int b=(h+g)%2;
    b=b*30;
    ms=ms+b;
    hh=hh+(ms)/60;
    ms=ms%60;
    if(10*hh>99 && 10*ms>99)
        cout<<hh<<":"<<ms;
    else if(10*hh>99 && 10*ms<=99)
        cout<<hh<<":0"<<ms;
    else if(10*hh<=99 && 10*ms>99)
        cout<<"0"<<hh<<":"<<ms;
    else
        cout<<"0"<<hh<<":0"<<ms;
}
