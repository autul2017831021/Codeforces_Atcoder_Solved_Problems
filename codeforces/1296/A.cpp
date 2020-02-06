#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,O=0,E=0,s=0;
	    long long x;
	    bool flag=false;
	    set<long long>e;
	    set<long long>o;
	    vector<long long>v;
	    cin>>n;
	    if(n%2==1)
	    {
	        flag=true;
	    }
	    while(n--)
	    {
	       cin>>x;
	       s=s+x;
	       if(x%2==0){
	          e.insert(x);
	          E++;
	       }
	       else{
	          o.insert(x);
	          O++;
	       }
	    }
	    //cout<<O<<endl;

	    if(o.size()==0)
	      cout<<"NO"<<endl;
        else if(o.size()>0 && e.size()>0)
        {
            cout<<"YES"<<endl;
        }
        else if(o.size()>=1 && flag==true)
        {
            cout<<"YES"<<endl;
        }
        else if(o.size()>=1 && flag==false)
        {
            cout<<"NO"<<endl;
        }


	}
	return 0;
}
