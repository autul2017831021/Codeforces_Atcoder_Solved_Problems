#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n>>s;
	for (int i=1;i<int(s.size()); ++i) {
		if (s[i]<s[i - 1]) {
			cout<<"YES"<<endl;
			cout <<i<<" "<<i+1<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
}
