#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll x; cin >> x;
  if (x <= 6) {cout << 1 << endl;}
  else if (x <= 11) {cout << 2 << endl;}
  else {
    ll q = x / 11;
    ll res = x % 11;
    if (res == 0) {cout << 2*q << endl;}
    else if (res <= 6) {cout << 2*q + 1 << endl;}
    else {cout << 2*q + 2 << endl;}
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
