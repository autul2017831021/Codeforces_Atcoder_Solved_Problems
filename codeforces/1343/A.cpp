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
bool bal(pair<ll,ll>a,pair<ll,ll>b){
    return b.S > a.S;
}
main()
{
    int test;
    cin>>test;
    for(int iii=0;iii<test;iii++)
    {
        ll n,x,k=1,i=1;
        cin>>n;
        while(1)
        {
            k=k+pow(2,i);
            i++;
            if(n%k==0)
            {
                cout<<n/k<<endl;
                break;
            }
        }
    }

}
