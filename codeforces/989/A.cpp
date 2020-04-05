#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
typedef long long int ll;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
main()
{
    ll i,j,n;
    string s;
    cin>>s;
    n=s.sz;
    bool p=0;
    for(i=0;i<=n-2;i++){

        if(s[i]=='B' && s[i+1]=='A' &&s[i+2]=='C'){
            p = 1;
            break;
        }
        if(s[i]=='B' && s[i+1]=='C' &&s[i+2]=='A'){
            p = 1;
            break;
        }
        if(s[i]=='A' && s[i+1]=='B' &&s[i+2]=='C'){
            p = 1;
            break;
        }
        if(s[i]=='A' && s[i+1]=='C' &&s[i+2]=='B'){
            p = 1;
            break;
        }
        if(s[i]=='C' && s[i+1]=='A' &&s[i+2]=='B'){
            p = 1;
            break;
        }
        if(s[i]=='C' && s[i+1]=='B' &&s[i+2]=='A'){
            p = 1;
            break;
        }
    }
    if(p){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
