#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	for(int i=0;i<n/7;i++)
        cout<<"ROYGBIV";
    if(n%7==1)
        cout<<"G";
	else if(n%7==2)
        cout<<"GB";
	else if(n%7==3)
        cout<<"YGB";
	else if(n%7==4)
        cout<<"YGBI";
	else if(n%7==5)
        cout<<"OYGBI";
	else if(n%7==6)
        cout<<"ROYGBI";
}