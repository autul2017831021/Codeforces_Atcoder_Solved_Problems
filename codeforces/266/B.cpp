#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t;
    cin>>n>>t;
    char s[n+1];
    scanf("%s",s);
    while(t--)
    {
       // cout<<"OK"<<endl;
        for(int i=0;i<n;i++)
        {
           //cout<<"strat"<<i<<endl;
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';s[i+1]='B';
               // cout<<i<<endl;
                if(s[i+2]=='G')
                    i=i+1;
                   // cout<<i<<endl;//
            }
        }
    }
    printf("%s",s);
}
