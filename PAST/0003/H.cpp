#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N,L; cin >> N >> L;
  vector<int> x(N);
  rep(i,N) cin >> x[i];
  int T1, T2, T3; cin >> T1 >> T2 >> T3;
  vector<int> best(L+1);
  best[0] = 0; 
  best[1] = T1;
  int idx = 0;
  if (x[idx] == 1) {best[1] += T3; idx++;}
  best[2] = min(best[1]+T1, T1+T2);
  if (x[idx] == 2) {
    best[2] += T3;
    idx++;
  }
  if (L == 2) {
    best[2] = min(best[2], best[1] + (T1+T2)/2);
    best[2] = min(best[2], T1/2 + T2*3/2);
    cout << best[2] << endl; return;
  }
  best[3] = min(best[2]+T1, best[1]+T1+T2);
  if (x[idx] == 3) {best[3] += T3; idx++;} 
  if (L==3) {
    best[3] = min(best[3], best[2] + (T1+T2)/2);
    best[3] = min(best[3], best[1] + T1/2 + T2*3/2);
    best[3] = min(best[3], best[0] + T1/2 + T2*5/2);
    cout << best[3] << endl; return;}
  for(int i = 4; i <= L; i++) {
    best[i] = min(best[i-1]+T1, best[i-2]+T1+T2);
    best[i] = min(best[i], best[i-4] + 3*T2+T1);
    if (x[idx] == i) {best[i] += T3; idx++;}
  }
  best[L] = min(best[L], best[L-1] + (T1+T2)/2);
  best[L] = min(best[L], best[L-2] + T1/2 + T2*3/2);
  best[L] = min(best[L], best[L-3] + T1/2 + T2*5/2);
  cout << best[L] << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
