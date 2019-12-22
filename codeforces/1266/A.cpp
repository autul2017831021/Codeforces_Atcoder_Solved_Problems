#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        int sum=0,m,e=0,z=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            m=s[i]-'0';
            sum=sum+m;
            if(m%2==0)
                e++;
            if(m==0)
                z++;
        }
        if(sum%3==0 && e>1 && z>0)
            cout<<"red"<<endl;
        else
            cout<<"cyan"<<endl;

    }


}
