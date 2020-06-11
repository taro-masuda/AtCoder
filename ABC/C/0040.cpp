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
  vector<int> cost(N);
  cost[0] = 0;
  cost[1] = abs(a[0] - a[1]);
  for(int i = 2; i < N; i++) {
    cost[i] = min(cost[i-2] + abs(a[i]-a[i-2]), cost[i-1] + abs(a[i]-a[i-1]));
  }
  cout << cost[N-1] << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
