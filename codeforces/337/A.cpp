#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a[1000];
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }
    sort(a, a+ m);
    int c = a[n-1] - a[0];
    for (int i = 1; i <= m - n; i++)
    {
        if (a[i+n-1] - a[i] < c)
        {
            c = a[i+n-1] - a[i];
        }
    }
    cout << c << endl;
    return 0;
}