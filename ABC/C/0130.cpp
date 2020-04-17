#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll W,H,x,y;
  cin >> W >> H >> x >> y;
  double area = (W*H) / 2.0;
  cout << area << " ";
  if (abs(W/2.0-(double)x) < 1e-9 && abs(H/2.0-(double)y) < 1e-9) cout << 1 << endl;
  else cout << 0 << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
