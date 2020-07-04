#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
//using P = pair<int,int>;

void Main()
{
  ll n; cin >> n;
  vector<P> a(n);
  rep(i,n) cin >> a[i].second >> a[i].first;
  sort(a.begin(), a.end());
  ll time = 0;
  rep(i,n) {
    time += a[i].second;
    if (time > a[i].first) {
      cout << "No" << endl; return;
    }
  }
  cout << "Yes" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
