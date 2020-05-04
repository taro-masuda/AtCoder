#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N, M; cin >> N >> M;
  ll ans = 0;
  ll p = pow(2, M);
  ans = ((ll)1900*M + (N-M)*(ll)100) * p;
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
