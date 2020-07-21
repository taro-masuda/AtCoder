#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int n; cin >> n;
  vector<ll> a(n), b(n);
  rep(i,n) cin >> a[i] >> b[i];
  ll mintime = 1e18;
  rep(i,100) {
    rep(j,100) {
      ll time = 0;
      rep(k,n) {
        time += abs(a[k] - (i+1)) + abs(b[k] - a[k]) + abs(b[k] - (j+1));
      }
      mintime = min(mintime, time);
    }
  }
  cout << mintime << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
