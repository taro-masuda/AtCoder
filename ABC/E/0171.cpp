#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int n; cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  int s = a[0];
  for(int i = 1; i < n; i++) s ^= a[i];
  int ans;
  rep(i,n) {
    ans = s ^ a[i];
    cout << ans << " ";
  }
  cout << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
