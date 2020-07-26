#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n; cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  ll money = 1000;
  for (int i = 1; i < n; i++) {
    if (a[i-1] < a[i]) {
      money = (money/a[i-1]) * a[i] + money % a[i-1];
    }
  }
  cout << money << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
