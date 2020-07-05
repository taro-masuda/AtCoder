#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n; cin >> n;
  vector<ll> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  
  ll kokoti = 0;
  if (n==2) {cout << max(a[0], a[1]) << endl; return;}
  for (int i = 0; i <= (n-1)/2; i++) {
    kokoti += a[i];
  }
  if (n%2==0) kokoti += a[(n-1)/2];
  for (int i = (n-1)/2 - 1; i > 0; i--) {
    kokoti += a[i];
  }
  cout << kokoti << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
