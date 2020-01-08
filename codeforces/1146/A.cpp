#include<bits/stdc++.h>
using namespace std;
main()
{
    int a=0,i,l,r,ex=0,c=0;
    char s[101];
    while(cin>>s)
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='a')
                a++;
            else
                ex++;
        }

        if(a>ex)
            cout<<a+ex<<endl;
        else if(a==ex)
            cout<<a+ex-1<<endl;
        else
        {
            while(1)
            {
                ex--;
                if(a>ex)
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                cout<<a+ex<<endl;
        }
        a=0,ex=0,c=0;
    }
}