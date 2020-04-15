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
main()
{
    int n;
    string s;
    int a[10];
    cin>>n>>s;
    for(int i=1;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<s.sz;i++)
    {
        int x=s[i]-'0';
        if(a[x]>x)
        {
            for(int j=i;j<n;j++)
            {
                if(a[s[j]-'0']>=s[j]-'0')
                {
                    s[j]=a[s[j]-'0']+'0';
                }
                else
                {
                    break;
                }
            }
            break;
        }
    }
    cout<<s<<endl;
}
