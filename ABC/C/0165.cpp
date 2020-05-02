#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N,M,Q;
  cin >> N >> M >> Q;
  vector<int> a(Q), b(Q), c(Q), d(Q);
  rep(i,Q) {cin >> a[i] >> b[i] >> c[i] >> d[i];}
  // 全てのAについて全パターンを考える
  vector<int> A(10);
  int maxsum = 0;
  for(int A1 = 1; A1 <= M; A1++) {
    A[0] = A1;
    for (int A2 = A1; A2 <= M; A2++) {
      A[1] = A2;
      for (int A3 = A2; A3 <= M; A3++) {
        A[2] = A3;
        for (int A4 = A3; A4 <= M; A4++) {
          A[3] = A4;
          for (int A5 = A4; A5 <= M; A5++) {
            A[4] = A5;
            for (int A6 = A5; A6 <= M; A6++) {
              A[5] = A6;
              for (int A7 = A6; A7 <= M; A7++) {
                A[6] = A7;
                for (int A8 = A7; A8 <= M; A8++) {
                  A[7] = A8;
                  for (int A9 = A8; A9 <= M; A9++) {
                    A[8] = A9;
                    for (int A10 = A9; A10 <= M; A10++) {
                      A[9] = A10;
                      int sum = 0;
                      rep(i,Q) {
                        if (c[i] == A[b[i]-1] - A[a[i]-1]) sum += d[i];
                      }
                      maxsum = max(maxsum, sum);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << maxsum << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
