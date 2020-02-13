#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        int cnt=0;
        bool in[101],ia[101],ib[101];
        bool r=false;
        for(int i=0;i<101;i++)
            {
                in[i]=false;
                ia[i]=false;
                ib[i]=false;
            }
        for(int i=0;i<a.size();i++)
        {
            if(b[i]==a[i] && b[i]!=c[i])
                {
                    in[i]=true;
                    r=true;
                }
            else if(b[i]==c[i])
                ib[i]=true;
            else if(a[i]==c[i])
                ia[i]=true;
        }
        for(int i=0;i<a.size();i++)
        {
            if(in[i]==false)
              {
                  if(ia[i]==true)
                    b[i]=c[i];
                  else if(ib[i]==true)
                    a[i]=c[i];
              }
        }

        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
                cnt++;
            }
        }
        if(cnt==a.size() && r==false)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
