#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N) {cin >> A[i];}
  sort(A.begin(), A.end());
  int m = A[0];
  int prev = 1e7;
  int idx = 0;
  while (m != prev ) {
    prev = m;
    while (idx < A.size()) {
      int res = A[idx] % m;
      if (res != 0 && res < m) {
        m = res;
        A[idx] = m;
        sort(A.begin(), A.end());
        idx = 0;
      } else idx++;
    }
  }
  cout << m << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
