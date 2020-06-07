#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  string s,t;
  cin >> s; cin >> t;
  bool same = true;
  rep(i,3) {
    char si = s[i];
    char ti = t[i];
    if (si != ti) same = false;
    if (tolower(si) == tolower(ti)) ;
    else {cout << "different" << endl; return;}
  }
  if (same) cout << "same" << endl;
  else cout << "case-insensitive" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
