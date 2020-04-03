#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define bg begin()
#define en end()
#define sz size()
int main() {
	int n;
	string s;
	cin>>n>>s;
	int a[1000]={0};
	if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(n>26)
    {
        cout<<"YES"<<endl;
        return 0;
    }
	for(int i=0;i<n;i++)
    {
        int x=s[i];
        //cout<<x<<endl;
        a[x]+=1;
    }
    bool f=0;
    for(int i=97;i<123;i++)
    {
        //cout<<a[i]<<endl;
        if(a[i]>1)
            f=1;
    }
    if(f)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}