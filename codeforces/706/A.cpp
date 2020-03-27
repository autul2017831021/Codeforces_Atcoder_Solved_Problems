#include<bits/stdc++.h>
using namespace std;
double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
}
main()
{
    double x,y,m;
    cin>>x>>y;
    int n;
    cin>>n;
    bool f=0;
    for(int i=0;i<n;i++)
    {
        double a,b,c;
        cin>>a>>b>>c;
        double d=distance(x,y,a,b);
        double t=d/c;
        if(f==0)
        {
            m=t;
            f=1;
        }
        m=min(m,t);
    }
    printf("%.7f",m);
}
