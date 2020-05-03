#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N;
  cin >> N;
  vector<ll> a(N);
  ll sum = 0;
  rep(i,N) {
    cin >> a[i]; 
    sum += a[i];
  }
  ll snuke = 0;
  ll arai = sum;
  ll d = 1e18;
  for (int i = 0; i < N-1; i++) {
    snuke += a[i];
    arai -= a[i];
    d = min(d, abs(snuke-arai));
  }
  cout << d << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
