#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


void Main()
{
  string S;
  cin >> S;
  int zeroStart = 0;
  int oneStart = 0;
  rep(i,S.size()){
    if (S[i] == '0') {
      if (i%2 == 1) zeroStart++;
      else oneStart++;
    }
    if (S[i] == '1') {
      if (i%2 == 0) zeroStart++;
      else oneStart++;
    }
  }
  cout << min(zeroStart, oneStart) << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
