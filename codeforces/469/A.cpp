#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    set<int>s;
    int a,b,y;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> y;
        s.insert(y);
    }
    cin >> b;
    for(int i=0;i<b;i++)
     {
         cin >> y;
        s.insert(y);
     }
     if(s.size()== x)
        cout<<"I become the guy.";
     else
        cout<<"Oh, my keyboard!";
}
