#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  string Sdash, T; cin >> Sdash; cin >> T;
  int N = Sdash.size(); int M = T.size();
  vector<string> candidates;
  for (int s = 0; s < N-M+1; s++) {
    bool matched = true;
    for (int t = 0; t < M; t++) {
      if (Sdash[s+t] == T[t] or Sdash[s+t] == '?') ;
      else {matched = false; break;}
    }
    if (matched) {
      string candidate = Sdash;
      for(int t = s; t < s+M; t++) candidate[t] = T[t-s];
      int i = 0;
      for (char c : candidate) {
        if (c == '?') candidate[i] = 'a';
        i++;
      }
      candidates.push_back(candidate);
    }
  }
  sort(candidates.begin(), candidates.end());
  if (candidates.size() == 0) cout << "UNRESTORABLE" << endl;
  else cout << candidates[0] << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
