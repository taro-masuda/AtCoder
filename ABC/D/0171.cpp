#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<ll> cnt(100000);
  ll amount = 0;
  rep(i,N) {
    ll a; cin >> a;
    amount += a;
    cnt[a-1]++;
  }
  int Q; cin >> Q;
  rep(i,Q) {
    ll b,c; cin >> b >> c;
    amount -= b*cnt[b-1];
    amount += c*(cnt[b-1]);
    cnt[c-1] += cnt[b-1];
    cnt[b-1] = 0;
    cout << amount << endl;
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
