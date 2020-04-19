#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N;
  cin >> N;
  vector<ll> A(N-1);
  vector<ll> B(N);
  rep(i,N) {B[i] = 0;}
  rep(i,N-1) {
    cin >> A[i];
  }
  for(int i = 0; i < N-1; i++) {
    B[A[i]-1] += 1;
  }
  rep(i,N) {
    cout << B[i] << endl;
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
