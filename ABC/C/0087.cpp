#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int A[2][100];

void Main()
{
  int N; cin >> N;
  rep(i,2){
    rep(j,N){
      cin >> A[i][j];
    }
  }
  int niretsume = A[0][0];
  rep(j,N) {
    niretsume += A[1][j];
  }
  int maxnum = niretsume;
  for(int j = 1; j < N; j++) {
    niretsume += A[0][j] - A[1][j-1];
    maxnum = max(maxnum, niretsume);
  }
  cout << maxnum << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}