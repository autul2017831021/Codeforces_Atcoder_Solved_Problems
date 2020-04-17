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
    int n;
    cin>>n;
    char b,w;
    b='B';
    w='W';
    int a[210][210]={0};
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"B";
            }
            else
                cout<<"W";
        }
        cout<<endl;
    }
}