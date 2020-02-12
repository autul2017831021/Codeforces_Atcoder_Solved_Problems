#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0,index=0,s_index=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1')
                {
                    index=i;
                    break;
                }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
                {
                    s_index=i;
                    break;
                }
        }
        //cout<<s_index<<" "<<index<<endl;
        for(int i=s_index+1;i<index;i++)
        {
            if(s[i]=='0')
                c++;
        }
        cout<<c<<endl;
    }
}
