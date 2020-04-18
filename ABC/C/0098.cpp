#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; string S;
  cin >> N; cin >> S;
  vector<int> wnum(N);
  vector<int> eanum(N);
  wnum[0] = 0; eanum[0] = 0;
  if (S[0] == 'W') wnum[0]++;
  else eanum[0]++;
  
  for (int i = 1; i < N; i++){
    if (S[i] == 'W') {
      wnum[i] = wnum[i-1] + 1;
      eanum[i] = eanum[i-1];
    } else {
      eanum[i] = eanum[i-1] + 1;
      wnum[i] = wnum[i-1];
    }
  }
  int minnum = N;
  rep(i,N) {
    if (i == 0) minnum = min(minnum, eanum[N-1]-eanum[0]);
    else {
      minnum = min(minnum, eanum[N-1]-eanum[i] + wnum[i-1]);
    } 
  }
  cout << minnum << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}