#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N;
  cin >> N;
  vector<int> t(N), x(N), y(N);
  int curX = 0, curY = 0, curT = 0;
  rep(i,N) {
    cin >> t[i] >> x[i] >> y[i];
  }
  rep(i,N) {
    int dx = abs(x[i]-curX);
    int dy = abs(y[i]-curY);
    if (dx + dy <= t[i]-curT && (t[i]-curT-dx-dy)%2==0) ;
    else {cout << "No" << endl; return;}
    curX = x[i];
    curY = y[i];
    curT = t[i];
  }
  cout << "Yes" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
