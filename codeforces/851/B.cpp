#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x[3], y[3];

ll sq2(int i, int j) {
  ll dx = x[i]-x[j];
  ll dy = y[i]-y[j];
  return dx*dx+dy*dy;
}

int col() {
  ll ux = x[1]-x[0], uy = y[1]-y[0];
  ll vx = x[2]-x[1], vy = y[2]-y[1];

  return ux*vy - uy*vx==0;
}

int main() {
  for (int i = 0; i < 3; i++) scanf("%lld%lld", &x[i], &y[i]);
  if (col()) printf("No\n");
  else printf("%s\n", (sq2(0, 1) == sq2(1, 2))?"Yes":"No");

  return 0;
}
