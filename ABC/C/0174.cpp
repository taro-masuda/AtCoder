#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n; cin >> n;
  string c; cin >> c;
  ll cnt = 0;
  ll nw = 0;
  rep(i,n-1) {
    if (c[i] == 'W' and c[i+1] == 'R') cnt++;
    if (c[i] == 'W') nw++;
  }
  if (c[n-1] == 'W') nw++;
  ll nr = n - nw;
  if (cnt == 0) {cout << 0 << endl; return;}
  ll ans = 0;
  rep(i, nr) {
    if (c[i] == 'W') {
      ans++;
    }
  }
  cout << ans << endl;
} 

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
