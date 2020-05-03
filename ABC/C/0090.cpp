#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N, M; cin >> N >> M;
  if (N == 2 || M == 2) {cout << 0 << endl; return;}
  if (N == 1) {
    if (M==1) {cout << 1 << endl; return;}
    cout << max(M-2,(ll)0) << endl; return;
  }
  if (M==1) {
    if (N==1) {cout << 1 << endl; return;}
    cout << max(N-2,(ll)0) << endl; return;
  }
  cout << M*N - (2*M + 2*N - 4) << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
