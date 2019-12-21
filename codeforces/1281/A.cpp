#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        //getline(cin,s);
        cin>>s;
        if(s[s.size()-1]=='a')
            cout<<"KOREAN"<<endl;
            else if(s[s.size()-1]=='o')
                cout<<"FILIPINO"<<endl;
            else
                cout<<"JAPANESE"<<endl;
    }

}
