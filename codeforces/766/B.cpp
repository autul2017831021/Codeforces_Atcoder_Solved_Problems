#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,x;
    vector <int> v;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int k=0;
    for(int i=0;i<n-2;i++)
    {
        if(v[i]+v[i+1]>v[i+2])
            {k=1;break;}
    }
    if(k)
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;

    return 0;

}
