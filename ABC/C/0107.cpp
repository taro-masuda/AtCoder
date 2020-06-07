#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, K; cin >> N >> K;
  vector<int> x(N);
  rep(i,N) cin >> x[i];
  int minTime = 2e9;
  rep(i,N-K+1) {
    int iTime = abs(x[i]);
    if (x[i+K-1] > 0) iTime += x[i+K-1] - x[i];
    int iTime2 = abs(x[i+K-1]);
    if (x[i] < 0) iTime2 += x[i+K-1] - x[i];
    minTime = min(minTime, iTime);
    minTime = min(minTime, iTime2);
  }
  cout << minTime << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
