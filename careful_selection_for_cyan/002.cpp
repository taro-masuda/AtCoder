#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int n; cin >> n;
  int cnt = 0;
  for (int i = 3; i <= n; i++) {
    int div = 0;
    for (int j = 1; j <= i; j++) {
      if (i%j == 0) div++;
      j++; // 奇数にする
    }
    if (div == 8) cnt++;
    i++; // 奇数にする
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