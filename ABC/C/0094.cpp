#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N;
  cin >> N;
  vector<int> X(N), Y(N);
  rep(i,N) {cin >> X[i]; Y[i] = X[i];}
  sort(X.begin(), X.end());
  int right = X[N/2];
  int left = X[N/2-1];
  rep(i,N) {
    if (Y[i] <= left) cout << right << endl;
    else if (Y[i] >= right) cout << left << endl;
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