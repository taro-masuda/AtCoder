#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n,m; cin >> n >> m;
  vector<vector<ll>> a(n, vector<ll>(m));
  rep(i,n){
    rep(j,m) {
      cin >> a[i][j];
    }
  }
  ll maxpoint = 0;
  rep(m1,m) {
    rep(m2,m) {
      if (m1 == m2) continue;
      ll point = 0;
      rep(i,n) point += max(a[i][m1], a[i][m2]);
      maxpoint = max(maxpoint, point);
    }
  }
  cout << maxpoint << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}