#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N,K; cin >> N >> K;
  ll cnt[100000] = {(ll)0};
  rep(i,N) {
    ll ai, bi;
    cin >> ai >> bi;
    cnt[--ai] += bi;
  }
  ll order = 0;
  rep(i,100000) {
    if (order + cnt[i] >= K) {cout << ++i << endl; return;}
    order += cnt[i];
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
