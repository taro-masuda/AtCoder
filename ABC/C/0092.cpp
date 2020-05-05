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
  rep(i,N) cin >> A[i];
  int d = abs(A[0]);
  rep(i,N-1) d += abs(A[i] - A[i+1]);
  d += abs(A[N-1]);
  
  rep(i,N) {
    int di;
    if (i == 0) di = d - abs(A[0]) - abs(A[1] - A[0]) + abs(A[1]);
    else if (i < N-1) {
      di = d - abs(A[i] - A[i-1]) - abs(A[i] - A[i+1]) + abs(A[i+1] - A[i-1]);
    } else di = d - abs(A[N-1] - A[N-2]) - abs(A[N-1]) + abs(A[N-2]);
    cout << di << endl;
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
