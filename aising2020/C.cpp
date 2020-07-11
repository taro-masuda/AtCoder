#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n; cin >> n;
  vector<ll> ans(n+1);
  for(ll x = 1; x*x <= n; x++) {
    for(ll y = 1; y*y <= n; y++) {
      for(ll z = 1; z*z <= n; z++) {
        ll incre = x*x + y*y + z*z + x*y + y*z + z*x;
        if (incre <=n) ans[incre]++;
      }
    }
  }
  for(int i = 1; i <= n; i++) {
    cout << ans[i] << endl;
  }
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
