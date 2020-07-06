#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

vector<pair<ll,ll>> prime_factorize(ll N) {
  vector<pair<ll,ll>> res;
  for (ll a = 2; a * a <= N; ++a) {
    if (N % a != 0) continue;
    long long ex = 0;

    while (N % a == 0) {
      ++ex;
      N /= a;
    }

    res.push_back({a, ex});
  }

  if (N != 1) res.push_back({N, 1});
  return res;
}

void Main()
{
  ll n; cin >> n;
  vector<pair<ll, ll>> pairs = prime_factorize(n);
  ll ans = 0;
  for (pair<ll, ll> p : pairs) {
    ll cnt = p.second;
    ll i = 1;
    while (cnt - i >= 0) {
      cnt -= i;
      i++;
    }
    ans += i-1;
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
