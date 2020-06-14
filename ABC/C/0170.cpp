#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int X,N; cin >> X >> N;
  vector<int> p(N);
  set<int> se;
  rep(i,N) {cin >> p[i]; se.insert(p[i]);}
  int kurabe = X; int sabun = 0;
  while (true) {
    if (se.find(X-sabun) == se.end()) {cout << X-sabun << endl; return;}
    else if (se.find(X+sabun) == se.end()) {cout << X+sabun << endl; return;}
    sabun++;
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
