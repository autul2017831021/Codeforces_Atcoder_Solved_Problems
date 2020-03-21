#include<bits/stdc++.h>
using namespace std;
int main () {
int n,m;
cin>>n>>m;
string s;
cin>>s;
int l,r;
char a,b;
while(m--){
cin>>l>>r;
cin>>a>>b;
l--;
r--;
for(int i=l;i<=r;i++){
    if(s[i]==a){
        s[i]=b;
    }
}
}
cout<<s<<endl;

}
