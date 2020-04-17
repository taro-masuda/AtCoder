#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, M;
  int cnt = 0;
  int gateMin = 0;
  cin >> N >> M;
  int gateMax = N;
  vector<int> L(M), R(M);
  for (int i = 1; i <= M; i++) {
    cin >> L[i-1] >> R[i-1];
  }
  for (int i = 1; i <= M; i++) {
    gateMin = max(gateMin, L[i-1]);
    gateMax = min(gateMax, R[i-1]);
  }
  cout << max(gateMax - gateMin +1,0) << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
