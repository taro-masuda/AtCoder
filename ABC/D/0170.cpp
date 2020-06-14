#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


void Main()
{
  int N; cin >> N;
  vector<int> A(N);
  vector<int> freq(1000000);
  set<int> se;
  rep(i,N) {cin >> A[i]; se.insert(A[i]); freq[A[i]-1]++;}
  int cnt = 0;
  rep (i,N) {
    bool iscnt = true;
    int sqrtai = (int)sqrt(A[i]);
    if (A[i] == 1) {
      if (freq[0] >= 2) continue;
      else {cnt++; continue;}
    }
    if (freq[0] > 0) continue;
    for (int j = 2; j <= sqrtai; j++) {
      if ((A[i]%j == 0)and (freq[j-1] > 0 or freq[A[i]/j-1] > 0)) {iscnt = false; break;}
    }
    if (iscnt and freq[A[i]-1] <= 1) {cnt++; } 
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
