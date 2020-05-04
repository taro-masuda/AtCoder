#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int A[100][100];
int TF[100000];

void Main()
{
  rep(i,100000) {TF[i] = 1;}
  int N, M;
  cin >> N >> M;
  vector<int> H(N);
  rep(i,N) cin >> H[i];
  vector<int> A(M), B(M);
  rep(i,M) {
    cin >> A[i] >> B[i];
    A[i]--; B[i]--;
  }
  rep(i,M) {
    if (H[A[i]] == H[B[i]]){
      TF[A[i]] = 0;
      TF[B[i]] = 0;
    } else if (H[A[i]] > H[B[i]]) TF[B[i]] = 0;
    else TF[A[i]] = 0;
  }
  int cnt = 0;
  rep(i,N) {cnt += TF[i];}
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
