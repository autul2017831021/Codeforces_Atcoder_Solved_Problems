#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
       int x;cin>>x;
       if(x+k<=5)
          c++;
    }
    cout<<c/3<<endl;
}
