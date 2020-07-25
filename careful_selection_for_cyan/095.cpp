#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll a,b,k; cin >> a >> b >> k;
  ll cnt;
  cnt = min(k, a);
  a -= cnt;
  if (a == 0) {
    cnt = min(k-cnt, b);
    b -= cnt;
  }
  cout << a << " " << b << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
