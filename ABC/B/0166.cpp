#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int A[100][100];

void Main()
{
  int N, K;
  cin >> N >> K;
  vector<int> d(K);
  set<int> se;
  rep(i,K) {
    cin >> d[i];
    rep(j,d[i]) {
      cin >> A[i][j];
      if (se.find(A[i][j]) == se.end()) se.insert(A[i][j]);
    }
  }
  
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    if (se.find(i) == se.end()) cnt++;
  }
  cout << cnt << endl;
  
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
