#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    string s,t;
    bool zero=0,thik=0;
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        long long z=0,o=0;
        int l=s.size();
        bool ok=1;
        if(l==1 && s[0]=='0')
        {
            zero=1;
        }
        else if(l==1)
        {
            if(s[0]=='1' && thik==0)
            {
                //cout<<"shona 1"<<endl;
                t=s;
            }
            else if(s[0]!='1')
            {
                thik=1;
                t=s;
            }
        }
        else if(!zero && l>1)
        {
            //cout<<s[0]<<" ";
            if(s[0]=='1'){
                for(int i=1;i<l;i++)
                {
                    //cout<<s[i]<<" ";
                    if(s[i]!='0')
                    {
                        //cout<<"bal"<<endl;
                       ok=0;
                       break;
                    }
                }
                //cout<<endl;
                if(ok)
                    ans+=l-1;
                else
                {
                   t=s;
                   thik=1;
                   //cout<<"t->"<<t<<endl;
                }
            }
            else
            {
                t=s;
                thik=1;
                //cout<<"t2->"<<t<<endl;
            }
        }
    }
    if(zero)
        cout<<"0";
    else
    {
        if(thik==1)
            cout<<t;
        else
            cout<<"1";
        for(long long i=0;i<ans;i++)
            cout<<"0";
    }
}
