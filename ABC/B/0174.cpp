#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


void Main()
{
  ll n,d; cin >> n >> d;
  vector<ll> x(n), y(n);
  ll cnt = 0;
  rep(i,n) {
    ll x, y;
    cin >> x >> y;
    if (x*x + y*y <= d*d) cnt++;
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
