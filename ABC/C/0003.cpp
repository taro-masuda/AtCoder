#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, K; cin >> N >> K;
  vector<int> R(N);
  rep(i,N) cin >> R[i];
  sort(R.begin(), R.end());
  double rate = 0.0;
  for(int i = N-K; i < N; i++) {
    rate = (rate + R[i]) / 2.0;
  }
  cout << rate << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
