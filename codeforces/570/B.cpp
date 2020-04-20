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
    int n,c=0,b=0,m=0;
    cin>>n>>m;
    if(n==1)
    {
        cout<<"1";
        r0;
    }
    b=m+1;
    c=m-1;
    if(c>=n-b+1)
        cout<<c<<endl;
    else
        cout<<b<<endl;
}