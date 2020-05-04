#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<int> A(N);
  unordered_map<int,int> ut;
  ll cnt = 0;
  rep(i,N) {
    cin >> A[i];
    if (ut.find(-A[i]+i) != ut.end()) cnt += ut[-A[i]+i];
    if (ut.find(A[i]+i) == ut.end()) ut[A[i]+i] = 1;
    else ut[A[i]+i]++;    
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
