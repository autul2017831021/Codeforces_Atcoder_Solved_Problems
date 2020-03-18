#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0;
        cin>>n;
        string s;
        cin>>s;
        bool f=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='8')
            {
                x=i+1;f=1;break;
            }
        }
        if(n-x>=10 && f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
