#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<int> A(N);
  int sum = 0;
  rep(i,N) {
    cin >> A[i];
    sum += A[i];
  }
  int mean = round((double)sum / N);
  int cost = 0;
  rep(i,N) cost += (A[i]-mean)*(A[i]-mean);
  cout << cost << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
