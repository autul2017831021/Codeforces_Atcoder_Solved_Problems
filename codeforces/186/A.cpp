#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s,t;
    cin>>s>>t;
    int c=0;
    bool ok[100]={0};
    bool bal=1;
    vector<char>v,x;
    int l=s.size();
    int k=t.size();
    if(l!=k)
    {
        cout<<"NO"<<endl;return 0;
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]!=t[i])
        {
            c++;
            if(c>2)
            {
                bal=0;
                break;
            }
        }
        v.push_back(s[i]);
        x.push_back(t[i]);
    }
    if(!bal)
    {
        cout<<"NO";
    }
    else
    {
        sort(v.begin(),v.end());
        sort(x.begin(),x.end());
        for(int i=0;i<l;i++)
        {
            if(v[i]!=x[i])
            {
                cout<<"NO";return 0;
            }

        }
        cout<<"YES";
    }
}