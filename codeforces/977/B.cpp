#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int res=0;
	string ans;
	for (int i=0;i<n-1;i++) {
		int c=0;
		for (int j = 0; j < n - 1; ++j)
			if (s[j]==s[i] && s[j+1]==s[i+1])
				c++;
		if (res<c) {
			res=c;
			ans=string(1,s[i])+string(1,s[i+1]);
		}
	}
	cout<<ans<<endl;
}
