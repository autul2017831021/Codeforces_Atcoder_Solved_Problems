using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
typedef double dl;
#define pb push_back
#define bg begin()
#define en end()
#define rbg rbegin()
#define ren rend()
#define sz size()
#define r0 return 0
#define F first
#define S second
#define inf 9999999999
main()
{
    string s;
    cin>>s;
    if(s[0]!='1')
    {
        cout<<"NO";
        r0;
    }
    int c=0;
    for(int i=1;i<s.sz;i++)
    {
        if(s[i]=='4' && c<2)
        {
            c++;
        }
        else if(s[i]=='4' && c>=2)
        {
            cout<<"NO";
            r0;
        }
        else if(s[i]!='1' && s[i]!='4')
        {
            cout<<"NO";
            r0;
        }
        else if(s[i]=='1')
            c=0;
    }
    cout<<"YES";
}
