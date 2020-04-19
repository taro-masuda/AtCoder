#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  const ll WARU = 1000000000 + 7;
  ll N,K;
  cin >> N >> K;
  ll cnt = 0; 
  for (ll i = K; i <= N+1; i++) {
    cnt += i*N - (i*(i-1)/2) - (i*(i-1)/2 - 1);
    cnt %= WARU;
  }
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
