#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, Q;
  cin >> N >> Q;
  string S;
  cin >> S;
  vector<int> l(Q);
  vector<int> r(Q);
  rep(i,Q) {
    cin >> l[i] >> r[i];
    l[i]--; r[i]--;
  }
  vector<int> cumulativeSum;
  int cnt = 0;
  for (int j = 0; j < S.size()-1; j++) {
    if (S[j] == 'A' && S[j+1] == 'C') {
      cumulativeSum.push_back(++cnt);
      cumulativeSum.push_back(++cnt);
      ++j;
    } else {
      cumulativeSum.push_back(cnt);
    }
  }
  cumulativeSum.push_back(cnt);

  rep(i,Q) {
    cout << cumulativeSum[r[i]]/2 - cumulativeSum[l[i]]/2 << endl;
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