#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N,M;
  cin >> N >> M;
  vector<vector<int>> s(M);
  vector<int> p(M);
  rep(i,M) {
    int k;
    cin >> k;
    rep(j,k) {
      int sjk;
      cin >> sjk; sjk--;
      s[i].push_back(sjk);
    }
  }
  rep(i,M) {cin >> p[i];}
  
  int pattern = 0;
  rep(bit, 1<<N) {
    bool allLight = true;
    for (int m = 0; m < M; m++) {
      int onSwitch = 0;
      for (int i = 0; i < s[m].size(); i++) {
        if (bit & (1<<s[m][i])) { // 1==電気ON, 0==電気OFF
		  onSwitch++;
        }
      }
      if (onSwitch % 2 != p[m]) {allLight = false; break;}
    }
    if (allLight) pattern++;
  }
  cout << pattern << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
