#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll X,Y;
  cin >> X >> Y;
  int cnt = 0;
  while (true) {
    if (X > Y) break;
    cnt++; X *= (ll)2;
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