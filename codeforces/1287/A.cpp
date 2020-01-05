#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,a=0,p=0;
        cin>>n;
        string s;
        bool index=false,flag=false;
        string temp;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
                index=true;
            if(index)
            {
                if(s[i]=='P')
                p++;
            }
        }
        ///cout<<"P->:"<<p<<endl;
            while(1){
            for(int i=0;i<n-1;i++)
            {
                if(s[i]=='A' && s[i+1]=='P')
                {
                    flag=true;
                    temp=s[i+1];
                    s[i+1]='A';
                    p--;
                    i=i+1;
                }
            }
            if(flag)
            {
                c++;flag=false;
            }
            ///cout<<"p->"<<p<<":"<<s<<endl;
            if(p==0)
                break;
          }
        cout<<c<<endl;
        ///cout<<s<<endl;
    }
}
