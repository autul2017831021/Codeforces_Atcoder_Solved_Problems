#include <bits/stdc++.h>

using namespace std;

main() {
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		long long a, b, c;
		cin >> a >> b >> c;
		cout << (a + b + c) / 2 << endl;
	}
	
	return 0;
}