#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll amount = 0;
  ll n; cin >> n;
  for (ll j = 1; j <= n; j++) {
    amount += j * (n/j) * (n/j+1) / 2;
  }
  cout << amount << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
