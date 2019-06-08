#include<bits/stdc++.h>
using namespace std;
main()
{
   long long n,s;
   cin>>n>>s;
   if(s<=n)
    cout<<"1";
   if(s%n==0)
	{
		cout<<s/n;
	}
	else if(s%n!=0 && s>n)
	{
		cout<<s/n+1;
	}
}
