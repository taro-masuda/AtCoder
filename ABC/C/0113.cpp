#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, M; cin >> N >> M;
  vector<int> p(M), y(M);
  map<int,vector<int>> PY;
  rep(i,M) {
    cin >> p[i] >> y[i];
    PY[p[i]].push_back(y[i]);
  }
  map<int, vector<int>>::iterator it;
  for (it = PY.begin(); it != PY.end(); it++) {
    sort(it->second.begin(), it->second.end());
  }
  rep(i,M) {
    cout << std::setw(6) << std::setfill('0') << p[i];
    vector<int>::iterator low = std::lower_bound (PY[p[i]].begin(), PY[p[i]].end(), y[i]);
    cout << std::setw(6) << std::setfill('0') << (int)(low-PY[p[i]].begin())+1 << endl;
  }
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
