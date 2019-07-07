#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c=0;
    cin>>n;
    char s[n];
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            c++;
        else
            c--;

    }
    if(c==0)
    {
        cout<<"2"<<endl;
        for(int i=0;i<strlen(s)-1;i++)
        {
            cout<<s[i];
        }
        cout<<" ";
        cout<<s[strlen(s)-1];
    }
    else
    {
        cout<<"1"<<endl<<s;
    }
}
