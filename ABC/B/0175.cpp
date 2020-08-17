#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


void Main()
{
  ll n; cin >> n;
  if (n < 3) {cout << 0 << endl; return;}
  vector<ll> l(n);
  rep(i,n) cin >> l[i];
  ll cnt = 0;
  for (int i = 0; i < n-2; i++) {
    ll a = l[i];
    for (int j = i+1; j < n-1; j++) {
      ll b = l[j];
      for (int k = j+1; k < n; k++) {
        ll c = l[k];
        if (a==b or b==c or c==a) continue;
        if (a+b > c and b+c > a and c+a > b) cnt++;
      }
    }
  }
  cout << cnt << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
