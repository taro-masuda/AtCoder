#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N,M,Q; cin >> N >> M >> Q;
  vector<vector<int>> uv(M, vector<int>(2));
  rep(i,M) {
    cin >> uv[i][0] >> uv[i][1]; 
    uv[i][0]--; uv[i][1]--;
  }
  vector<int> c(N); vector<int> curc(N);
  rep(i,N) {cin >> c[i]; curc[i] = c[i];}
  rep(i,Q) {
    string s; cin >> s;
    if (s == "1") {
      int idx;
      cin >> idx;
      idx--; cout << curc[idx] << endl;
      rep(i,M) {
        if (uv[i][0] == idx) curc[uv[i][1]] = curc[idx];
        else if (uv[i][1] == idx) curc[uv[i][0]] = curc[idx];
      }
    } else {
      int x[2]; cin >> x[0] >> x[1];
      cout << curc[--x[0]] << endl;
      curc[x[0]] = x[1];
    }
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
