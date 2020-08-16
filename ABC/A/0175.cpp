#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


void Main()
{
  string s; cin >> s;
  int maxcnt = 0;
  int cnt = 0;
  rep(i,3) {
    if (s[i] == 'R') cnt++;
    else cnt = 0;
    maxcnt = max(maxcnt, cnt);
  }
  cout << maxcnt << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
