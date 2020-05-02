#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<int> A(N);
  map<int, int> m;
  rep(i,N) {
    cin >> A[i];
    if (m.find(A[i]) == m.end()) m[A[i]] = 1;
    else m[A[i]] = (m[A[i]]+1)%2;
  }
  map<int,int>::iterator it;
  int ans = 0;
  for (it = m.begin(); it != m.end(); it++) ans += it->second;
  cout << ans << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
