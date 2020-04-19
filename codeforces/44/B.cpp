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
main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int cn=0;
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=b;j++)
        {
            int ans=(n-2*i-j)*2;
            if(ans>=0 && ans<=a)
                cn++;
        }
    }
    cout<<cn<<endl;
}


