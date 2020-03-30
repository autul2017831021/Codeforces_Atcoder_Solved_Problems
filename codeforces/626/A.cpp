#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
    {
        int lr=0,ud=0;
        for(int j=i;j<n;j++)
        {
            if(s[j]=='L')
                lr--;
            else if(s[j]=='R')
                lr++;
            if(s[j]=='U')
                ud++;
            else if(s[j]=='D')
                ud--;
            if(lr==0 && ud==0)
                c++;

        }
    }
	cout<<c<<endl;

}