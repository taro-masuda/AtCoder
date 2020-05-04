#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll X; cin >> X;
  ll A, B;
  
  for (A = (ll)-6208; A <= 6208; A++) {
    for (B = (ll)-6208; B <= 6208; B++) {
      if (A*A*A*A*A - B*B*B*B*B == X) {
        cout << A << " " << B << endl; return;
      }
    }
  }
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
