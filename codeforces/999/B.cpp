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
    int n,w,b,k;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            reverse(s.bg,s.bg+i);
            //cout<<s<<" ";
        }
    }
    cout<<s;
}

