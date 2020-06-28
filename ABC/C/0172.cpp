#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n,m,k; cin >> n >> m >> k;
  vector<ll> a(n), b(m);
  rep(i,n) cin >> a[i];
  rep(i,m) cin >> b[i];
  vector<ll> suma(n), sumb(m);
  
  ll maxind_a = n;
  suma[0] = a[0];
  for (int i=1; i<n; i++) {
    suma[i] = suma[i-1] + a[i];
  }
  for (int i=1; i<n; i++) {
    if (suma[i] >= k) {maxind_a = i; break;}
  }
  ll maxind_b = m;
  sumb[0] = b[0];
  for (int i=1; i<m; i++) {
    sumb[i] = sumb[i-1] + b[i];
  }
  for (int i=1; i<m; i++) {
    if (sumb[i] >= k) {maxind_b = i; break;}
  }
  
  maxind_a = min(maxind_a, n-1);
  maxind_b = min(maxind_b, m-1);
  ll maxnum = 0;
  for(ll i = maxind_a; i >= 0; i--){
    vector<ll>::iterator position = lower_bound(sumb.begin(), sumb.end(), k-suma[i]);  // 3 を二分探索
    ll idx_lower = distance(sumb.begin(), position);
    if (idx_lower == m) maxnum = max(maxnum, i+1+m);
    else if (suma[i] + sumb[idx_lower] <= k) {
      maxnum = max(maxnum, i+idx_lower+2);
    } else {
      if (idx_lower != 0) maxnum = max(maxnum, i+idx_lower+1);
      else if (suma[i] <= k) maxnum = max(maxnum, i+1);
    }
  }
  for(ll i = maxind_b; i >= 0; i--){
    vector<ll>::iterator position = lower_bound(suma.begin(), suma.end(), k-sumb[i]);  // 3 を二分探索
    ll idx_lower = distance(suma.begin(), position);
    if (idx_lower == n) maxnum = max(maxnum, i+1+n);
    else if (sumb[i] + suma[idx_lower] <= k) {
      maxnum = max(maxnum, i+idx_lower+2);
    } else {
      if (idx_lower != 0) maxnum = max(maxnum, i+idx_lower+1);
      else if (sumb[i] <= k) maxnum = max(maxnum, i+1);
    }
  }
  cout << maxnum << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
