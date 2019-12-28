#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,c=0,h,b;
        cin>>n;
        set<int>s;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                s.insert(a);
            }
        }
        while(1)
        {
            if(s.size()==0)
                break;
           b=*s.rbegin();
           h=b/2;
           if(h%2==0)
            s.insert(h);
           else
           {
           }
           s.erase(b);
           c++;
        }
        cout<<c<<endl;
        c=0;
    }
}

