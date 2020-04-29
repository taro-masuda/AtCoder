#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<int> cnt(100000);
  rep(i,100000) {cnt[i] = 0;}
  vector<int> a(N);
  rep(i,N) {cin >> a[i]; cnt[a[i]]++;}
  if (N==1) {cout << 1 << endl; return;}
  else if (N==2) {
    if (abs(a[0]-a[1]) <= 1) cout << 2 << endl;
    else cout << 1 << endl;
    return;
  }
  int maxnum = 0;
  rep(i,N-2) {maxnum = max(maxnum, cnt[i] + cnt[i+1] + cnt[i+2]);}
  cout << maxnum << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}