#include <bits/stdc++.h>
using namespace std;
main(){
    int t, n;
    string s;
	cin >> t;
	for(int j=0;j<t;j++){
		cin >> n >> s;
		int r=n-1;
		for(int i=0;i<n;i++)
			if(s[i]=='>'||s[n-1-i]=='<')
				r=min(r,i);
		cout<<r<<endl;
	}
}
