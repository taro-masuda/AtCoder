#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int n; cin >> n;
  vector<int> p(n);
  rep(i,n) cin >> p[i];
  int cnt = 0;
  rep(i,n) {
  	if (i+1 == p[i]) {
      if (i+1 < n) swap(p[i], p[i+1]);
      else swap(p[i], p[i-1]);
      cnt++;
    }
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
