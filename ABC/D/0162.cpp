#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N; string S;
  cin >> N; cin >> S;
  ll sum = 0;
  
  vector<int> rnum(N);
  vector<int> gnum(N);
  vector<int> bnum(N);
  rep(i,N) { rnum[i] = 0; gnum[i] = 0; bnum[i] = 0;
  }
  if (S[0] == 'R') rnum[0] = 1;
  else if (S[0] == 'G') gnum[0] = 1;
  else bnum[0] = 1;
  for (int i = 1; i < N; i++) {
    if ( S[i] == 'R') {
      rnum[i] = rnum[i-1] + 1;
      gnum[i] = gnum[i-1];
      bnum[i] = bnum[i-1];
    } else if (S[i] == 'G') {
      bnum[i] = bnum[i-1];
      gnum[i] = gnum[i-1] + 1;
      rnum[i] = rnum[i-1];
    } else {
      bnum[i] = bnum[i-1] + 1;
      gnum[i] = gnum[i-1];
      rnum[i] = rnum[i-1];
    }
  }
  
  for (int i = 0; i < N-2; i++) {
    char si = S[i];
    for (int j = i+1; j < N-1; j++) {
      char sj = S[j];
      if (sj != si) {
        if ((si == 'R' && sj == 'G') || (si == 'G' && sj == 'R')) {
          sum += bnum[N-1] - bnum[j];
          if (2*j-i < N) {
            if (S[2*j-i] == 'B') sum--;
          }
        } else if ((si == 'G' && sj == 'B') || (si == 'B' && sj == 'G')) {
          sum += rnum[N-1] - rnum[j];
          if (2*j-i < N) {
            if (S[2*j-i] == 'R') sum--;
          }
        } else if ((si == 'R' && sj == 'B') || (si == 'B' && sj == 'R')) {
          sum += gnum[N-1] - gnum[j];
          if (2*j-i < N) {
            if (S[2*j-i] == 'G') sum--;
          }
        }
      }
    }
  }
  cout << sum << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
