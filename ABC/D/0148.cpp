#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n; cin >> n;
  vector<ll> a(n);
  bool oneFound = false;
  rep(i,n) {
    cin >> a[i];
    if (a[i] == (ll)1) oneFound = true;
  }
  ll foundNum = 1;
  rep(i,n) {
    if (a[i] == foundNum) foundNum++;
  }
  if (!oneFound) {cout << -1 << endl; return;}
  else cout << n-(foundNum-1) << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
