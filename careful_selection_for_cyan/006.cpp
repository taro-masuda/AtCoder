#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int n; string s;
  cin >> n; cin >> s;
  vector<int> appear(1000);
  rep(i,1000) {
    std::ostringstream ss;
	ss << std::setw(3) << std::setfill('0') << i << "\n";
	std::string snum(ss.str());
    int idx = 0;
    rep(j,n) {
      if (snum[idx] == s[j]) idx++;
    }
    if (idx == 3) appear[i] = 1;
  }
  int ans = 0;
  rep(i,1000) {
    if (appear[i] == 1) ans++;
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
