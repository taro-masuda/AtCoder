#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N,M; cin >> N >> M;
  if (N >= M) {cout << 0 << endl; return;}
  vector<int> X(M);
  rep(i,M) cin >> X[i];
  sort(X.begin(), X.end());
  vector<int> dist(M-1);
  rep(i,M-1) dist[i] = X[i+1] - X[i];
  vector<int> distsort = dist;
  sort(distsort.begin(), distsort.end());
  int ans = 0;
  rep(i,M-1-(N-1)) {
    ans += distsort[i];
  }
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
