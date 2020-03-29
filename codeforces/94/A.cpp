#include <bits/stdc++.h>
using namespace std;
string a, b, mas[11], s1;
int shona(string x) {
    for (int i = 0; i < 10; i++) {
        if (x == mas[i]) {
            return i;
        }
    }
    return 0;
}
main() {
    cin >> a;
    for (int i = 0; i < 10; i++) {
        cin >> b;
        mas[i] = b;
    }
    for (int i = 0; i <= 70; i = i + 10) {
        s1 = a.substr((size_t)i, 10);
        cout << shona(s1);
    }
}
