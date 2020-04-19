#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N, M;
  cin >> N >> M;
  vector<ll> A(N);
  ll sumHW = 0;
  rep(i,M) {
    cin >> A[i]; 
    sumHW+=A[i];
  }
  if (sumHW > N) {cout << -1 << endl; return;}
  cout << N-sumHW << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
