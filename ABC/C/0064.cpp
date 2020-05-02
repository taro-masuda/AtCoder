#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i,N) {cin >> a[i];}
  int cnt[9] = {0};
  rep(i,N) {
    if (a[i] < 3200) cnt[a[i]/400]++;
    else cnt[8]++;
  }
  int kind = 0;
  rep(i,8) {
    if (cnt[i] > 0) kind++;
  }
  if(cnt[8] > 0) cout << max(kind,1) << " " << kind + cnt[8] << endl;
  else cout << kind << " " << kind << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
