#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, K;
  cin >> N >> K;
  vector<int> h(N);
  rep(i,N) {cin >> h[i];}
  sort(h.begin(), h.end());
  int minSize = 1e10;
  rep(i, N-K+1){
    minSize = min(minSize, abs(h[i]-h[i+K-1]));
  }
  cout << minSize << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
