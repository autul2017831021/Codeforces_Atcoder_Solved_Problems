#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,ans=0;
    cin>>n;
    while(n>0)
    {
        ans = ans + 1/n;
        n--;
    }
    printf("%0.12lf",ans);
}
