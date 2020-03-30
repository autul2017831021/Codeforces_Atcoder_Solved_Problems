#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;cin>>n;
    string s;cin>>s;
    int r=0,b=0,g=0;
    vector<char>v,x;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')b++;
        else if(s[i]=='G')g++;
        else r++;
    }
    if(b==n)
        cout<<"B";
    else if(g==n)
        cout<<"G";
    else if(r==n)
        cout<<"R";
    else if(b>=1 && g>=1 && r>=1 || ((r>=2 && b>=2) || (r>=2 && g>=2) || (g>=2 && b>=2)) )
    {
        cout<<"BGR";
    }
	else if((r>=2 && b==1) || (r>=2 && g==1))
	{
		cout<<"BG";
	}
	else if((b>=2 && r==1) || (b>=2 && g==1))
	{
		cout<<"GR";
	}
	else if((g>=2 && b==1) || (g>=2 && r==1))
	{
		cout<<"BR";
	}
	else if(r==1 && g==1)
	{
		cout << "B";
	}
	else if(r==1 && b==1)
	{
		cout << "G";
	}
	else if(b==1 && g==1)
	{
		cout << "R";
	}
}
