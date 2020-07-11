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
  int ans = 0;
  rep (i,n) {
 	if ((i+1)%2 == 1 and a[i]%2==1) ans++; 
  }
  cout << ans << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
