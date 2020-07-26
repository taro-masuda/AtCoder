#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int a,b,c,k; cin >> a >> b >> c;
  cin >> k;
  rep(i,k) {
    if (a < b and b < c) {cout << "Yes" << endl; return;}
    else {
      if (a >= b) b *= 2;
      else if (b >= c) c *= 2;
    }
  }
  if (a < b and b < c) {cout << "Yes" << endl; return;}
  cout << "No" << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
