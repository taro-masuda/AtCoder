#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<ll> A(N);
  rep(i,N) {cin >> A[i];}
  sort(A.begin(), A.end());
  ll s = 0, l = 0;
  for (int i = 1; i < N; i++) {
    if (A[i-1] == A[i]) {
      s = l;
      l = A[i];
      A[i-1] = 0; A[i] = 0;
    }
  }
  cout << s*l << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
