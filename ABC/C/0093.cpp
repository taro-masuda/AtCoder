#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  vector<int> A(3);
  cin >> A[0] >> A[1] >> A[2];
  sort(A.begin(), A.end());
  int cnt = 0;
  if ((A[0]%2 == 0 && A[1]%2 == 0 && A[2]%2 == 1) || 
      (A[0]%2 == 1 && A[1]%2 == 1 && A[2]%2 == 0))
  {cnt++; A[0]++; A[1]++;}
  else if ((A[0]%2 == 1 && A[1]%2 == 0 && A[2]%2 == 0) ||
           (A[0]%2 == 0 && A[1]%2 == 1 && A[2]%2 == 1))
  {
    cnt++; A[1]++;A[2]++;
  } else if ((A[0]%2 == 0 && A[1]%2 == 1 && A[2]%2 == 0) ||
           (A[0]%2 == 1 && A[1]%2 == 0 && A[2]%2 == 1)) {
    cnt++; A[0]++; A[2]++;
  }
  cnt += (A[2]-A[0])/2 + (A[2]-A[1])/2;
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