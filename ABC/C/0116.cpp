#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N;
  cin >> N;
  vector<int> h(N);
  rep(i,N) {cin >> h[i];}
  int idx = 0;
  int cnt = 0;
  while (idx < N) {
    while (h[idx] == 0) {
      idx++;
      if (idx == N) break;
    }
    if (idx == N) break;
    for (int j = idx; j < N; j++) {
      if (h[j] == 0) break;
      else h[j]--;
    }
    cnt++;
    idx = 0;
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