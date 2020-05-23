#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll L, R;
  cin >> L >> R;
  if (R - L >= 2019-1) {cout << 0 << endl; return;} 
  L = L % 2019;
  R = R % 2019;
  if (L==0 || R==0) {cout << 0 << endl; return;}
  if (R < L) {cout << 0 << endl; return;}
  ll minRes = 2019;
  for (ll i = L; i < R; i++) {
    for (ll j = L+1; j <= R; j++) {
      ll res = (i*j) %2019;
      if (res < minRes) minRes = res;
    }
  }
  cout << minRes << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
