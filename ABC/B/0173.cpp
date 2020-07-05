#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


void Main()
{
  int n; cin >> n;
  vector<int> ans(4);
  vector<string> S(n);
  rep(i,n) {
    cin >> S[i];
    if (S[i] == "AC") ans[0]++;
    else if (S[i] == "WA") ans[1]++;
    else if (S[i] == "TLE") ans[2]++;
    else if (S[i] == "RE") ans[3]++;
  }
  cout << "AC x " << ans[0] << endl;
  cout << "WA x " << ans[1] << endl;
  cout << "TLE x " << ans[2] << endl;
  cout << "RE x " << ans[3] << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
