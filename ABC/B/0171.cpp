#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, K; cin >> N >> K;
  vector<int> p(N);
  rep(i,N) cin >> p[i];
  sort(p.begin(), p.end());
  int amount = 0;
  rep(i,K) amount += p[i];
  cout << amount << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
