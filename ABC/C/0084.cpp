#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<int> C(N-1), S(N-1), F(N-1);
  rep(i,N-1) cin >> C[i] >> S[i] >> F[i];
  vector<int> ans(N);
  rep(i,N) {
    int t = 0;
    for(int j = i; j < N-1; j++) {
      while ((t - S[j]) < 0 or (t - S[j])%F[j] != 0) {
        t++;
      }
      t += C[j];
    }
    ans[i] = t;
    cout << ans[i] << endl;
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
