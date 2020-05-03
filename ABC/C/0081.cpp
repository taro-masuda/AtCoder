#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N,K;
  cin >> N >> K;
  vector<ll> a(N);
  unordered_map<int,int> umap;
  vector<int> cnt;
  int kind = 0;
  rep(i,N) {
    cin >> a[i];
    if (umap.find(a[i]) == umap.end()) {
      umap[a[i]] = 1;
      kind++;
    }
    else umap[a[i]]++;
  }
  std::unordered_map<int,int>::iterator it = umap.begin();
  for (it = umap.begin(); it != umap.end(); it++) {
    cnt.push_back(it->second);
  }
  sort(cnt.begin(), cnt.end());
  if (kind <= K) {cout << 0 << endl; return;}
  int ans = 0;
  rep(i,kind-K) ans += cnt[i];
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
