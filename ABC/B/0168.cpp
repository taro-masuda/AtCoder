#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int K; string S;
  cin >> K;
  cin >> S;
  rep(i,min((int)S.size(),K)) {
    cout << S[i];
  }
  if (K < (int)S.size()) cout << "..." << endl;
  else cout << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
