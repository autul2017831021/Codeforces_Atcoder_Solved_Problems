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
    cin>>n;
    string s="";
    string t;
    for(int i=1;i<1000;i++){
        t=to_string(i);
        s=s+t;
    }
    cout<<s[n-1]<<endl;
}

