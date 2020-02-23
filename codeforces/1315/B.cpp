#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll b,t,p;
        cin>>b>>t>>p;
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        ll ca=0,cb=0;
        char shona='s';
        vector<ll>v;
        v.push_back(0);
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='A' && s[i]!=shona){
                    ca++ ;
                    shona=s[i];
            }
            if (s[i]=='B'&&s[i]!=shona) {
                    cb++ ;
                    shona=s[i];
            }
            v.push_back((b*ca)+(t*cb));
        }
        reverse(v.begin(),v.end());
        ll index ;
        for ( int i=0;i<v.size();i++) {
            if (p>=v[i])
            {
                index=i+1 ;
                break ;
            }
        }
        cout<<index<<endl;
    }
}
