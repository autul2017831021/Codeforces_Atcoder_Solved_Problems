#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[10000];
    scanf("%s",a);
    int l=strlen(a);
    if(l==1)
    {
        cout<<a<<endl;
        return 0;
    }
    sort(a,a+l);
    int m=(l/2);
    for(int i=m;i<l-1;i++)
    {
        cout<<a[i]<<"+";
    }
    cout<<a[l-1]<<endl;
}
