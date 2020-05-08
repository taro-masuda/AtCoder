#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N,M; cin >> N >> M;
  if (M/2 <= N) {cout << M/2 << endl; return;}
  ll ans = 0;
  ans += N; 
  ll res = M - 2*N;
  ans += res / 4;
  cout << ans << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
