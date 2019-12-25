#include<bits/stdc++.h>
using namespace std;
main()
{
    double a,b,c,n,k=0;
    cin>>n;
    bool visited[100000],x[100000];
    set<double>s;
    for(int i=0;i<100000;i++)
       {
        visited[i]=false;x[i]=false;
       }
for(int a=1;a<=n;a++)
  {
     {
      for(int b=1;b<=n;b++)
       {
           if(visited[a] && x[b])
           {

           }
           else{
        c=a*a+b*b;
        double bal=sqrt(c);
        double z=0;
        if((bal-float(bal))==z && bal<=n)
        {
            visited[b]=true;x[a]=true;
            k++;
            //cout<<"                  "<<a<<" "<<b<<" "<<bal<<endl;
            //cout<<"                  "<<a*a<<" "<<b*b<<" "<<c<<endl<<"->"<<endl;
        }
      }
       }
     }
  }

    cout<<k<<endl;
}
