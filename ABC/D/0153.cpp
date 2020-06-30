#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll H; cin >> H;
  ll cur = H;
  ll cnt = 0;
  ll monsternum = 1;
  while (cur > 0) {
    if (cur > 1) {
      cnt += monsternum;
      monsternum *= 2;
    } else cnt += monsternum;
    cur /= 2;
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
