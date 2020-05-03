#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  unordered_set<int> to, from;
  int N,M; cin >> N >> M;
  vector<int> a(M), b(M);
  rep(i,M) {
    cin >> a[i] >> b[i];
    if (a[i] == 1) to.insert(b[i]);
    if (b[i] == N) from.insert(a[i]);
  }
  for (int i = 2; i < N; i++) {
    if (from.find(i) != from.end() && to.find(i) != to.end()) {
      cout << "POSSIBLE" << endl; return;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
