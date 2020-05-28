/*  ---------------------
    |      EIKHANE KI   |
    |        MAAGI      |
    ---------------------
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int test;cin>>test;
    while(test--)
    {
        ll row,col,x,y;ll ans=0;
        cin>>row>>col>>x>>y;
        char s[row][col];
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                char c;cin>>c;
                s[i][j]=c;
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(s[i][j]=='.')
                {
                    if(s[i][j+1]=='.' && j+1<col)
                    {
                        ans=ans+min(x+x,y);
                        s[i][j]='*';
                        s[i][j+1]='*';
                    }
                    else{
                        ans=ans+x;
                        s[i][j]='*';
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
