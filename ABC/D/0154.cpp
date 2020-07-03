#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n,k; cin >> n >> k;
  vector<ll> p(n);
  rep(i,n) cin >> p[i];
  ll sum = 0, maxsum = 0;
  rep(i,k) {
    sum += p[i];
    maxsum += p[i];
  }
  ll maxind = k-1;
  for (int i = k; i < n; i++) {
    sum -= p[i-k];
    sum += p[i];
    if (sum > maxsum) {
      maxsum = sum;
      maxind = i;
    }
  }
  double ans = 0;
  for (int i = maxind-k+1; i <= maxind; i++) {
    ans += (double)(p[i] + (ll)1) / (ll)2;
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