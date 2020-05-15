#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<int> a(N);
  rep(i,N) cin >> a[i];
  unordered_map<int,int> umap;
  rep(i,N) {
    if (umap.find(a[i]) == umap.end()) umap[a[i]] = 1;
    else umap[a[i]]++;
  }
  int cnt = 0;
  for (unordered_map<int,int>::iterator it = umap.begin(); it != umap.end(); it++) {
    if (it->first < it->second) cnt += it->second - it->first;
    else if (it->first > it->second) cnt += it->second;
  }
  cout << cnt << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
