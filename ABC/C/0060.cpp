#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N, T;
  cin >> N >> T;
  vector<ll> t(N);
  rep(i,N) {cin >> t[i];}
  ll tot = 0;
  rep(i,N-1) {
    if (t[i+1] - t[i] >= T) tot += T;
    else tot += t[i+1] - t[i];
  }
  tot += T;
  cout << tot << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
