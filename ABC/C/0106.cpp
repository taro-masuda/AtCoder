#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  string S;
  cin >> S;
  ll K;
  cin >> K;
  for (ll i = 0; i < K; i++) {
    if (S[i] != '1') {cout << S[i] << endl; return;}
  }
  cout << 1 << endl; return;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}