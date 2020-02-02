#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,n;
        cin>>a>>b>>c>>n;
        vector<long long>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        if(a==b && a==c && n%3==0)
        {
            cout<<"YES"<<endl;
        }
        else if(a==b && a==c && n%3!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            long long bal=v[2]-v[0];
            ///cout<<bal<<endl;
            long long sal=v[2]-v[1];
            ///cout<<sal<<endl;
            n=n-bal;
            ///cout<<"n:"<<n<<endl;
            if(n>=0)
            {
                n=n-sal;
                ///cout<<"n:"<<n<<endl;
                if(n>=0)
                {
                   if(n%3==0)
                       cout<<"YES"<<endl;
                   else
                       cout<<"NO"<<endl;
                }
                else
                    cout<<"NO"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
