#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  if (N == K) {cout << 1 << endl; return;}
  int cnt = ceil((float)(N-1) / (K-1));
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
