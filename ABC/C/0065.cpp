#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  const ll Q = 1e9+7;
  ll N, M;
  cin >> N >> M;
  ll diff = abs(N-M);
  if (diff > 1) {cout << 0 << endl; return;}
  ll ans = 1;
  for(int i = 1; i <= N; i++) ans = (ans * i) % Q;
  for(int i = 1; i <= M; i++) ans = (ans * i) % Q;
  if (diff == 0) cout << (ans*(ll)2)%Q << endl;
  else cout << ans << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
