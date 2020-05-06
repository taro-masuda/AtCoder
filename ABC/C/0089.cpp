#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<string> S(N);
  vector<ll> cnt(5);
  rep(i,5) cnt[i] = 0;
  rep(i,N) {
    cin >> S[i];
    if (S[i][0] == 'M') cnt[0]++;
    else if (S[i][0] == 'A') cnt[1]++;
    else if (S[i][0] == 'R') cnt[2]++;
    else if (S[i][0] == 'C') cnt[3]++;
    else if (S[i][0] == 'H') cnt[4]++;
  }
  ll ans = 0;
 
  ans += cnt[0] * cnt[1] * cnt[2];
  ans += cnt[0] * cnt[1] * cnt[3];
  ans += cnt[0] * cnt[1] * cnt[4];
  ans += cnt[0] * cnt[2] * cnt[3];
  ans += cnt[0] * cnt[2] * cnt[4];
  ans += cnt[0] * cnt[3] * cnt[4];
  ans += cnt[1] * cnt[2] * cnt[3];
  ans += cnt[1] * cnt[2] * cnt[4];
  ans += cnt[1] * cnt[3] * cnt[4];
  ans += cnt[2] * cnt[3] * cnt[4];
  
  cout << ans << "\n";
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
