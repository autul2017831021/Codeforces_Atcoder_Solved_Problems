using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
#define inf -9999999999
char ch[3]={'a','b','c'};
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.sz;
        bool f=1;
        for(int i=0;i<l-1;i++)
        {
            if(s[i]==s[i+1] && (s[i]=='a' || s[i]=='b' || s[i]=='c'))
            {
                f=0;
            }
        }
        if(!f)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=0;i<l;i++)
        {
            if(i==0)
            {
                if(s[i]=='?')
                {
                    if(s[i+1]=='a')
                        s[i]='b';
                    else
                        s[i]='a';
                }
            }
            else if(i==l-1)
            {
                if(s[i]=='?')
                {
                    if(s[i-1]=='a')
                        s[i]='b';
                    else
                        s[i]='a';
                }
            }
            else
            {
                if(s[i]=='?')
                {
                    for(int j=0;j<3;j++)
                    {
                        if(ch[j]!=s[i-1] && ch[j]!=s[i+1])
                            {
                                s[i]=ch[j];
                            }
                    }
                }
            }
        }
        cout<<s<<endl;
    }
}
