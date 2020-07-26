#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n, k; cin >> n >> k;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  for(int i = k; i < n; i++) {
    if (a[i-k] < a[i]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
