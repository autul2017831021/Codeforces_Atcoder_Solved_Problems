#include <iostream>
using namespace std;

int main() {
    int n, a, b, d=0;
    string c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c >> a >> b;
        if (a >= 2400 && b > a) {
            d =d+1;
        }
    }
    if (d >0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
