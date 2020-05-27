#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, NG1, NG2, NG3;
  cin >> N >> NG1 >> NG2 >> NG3;
  if (N == NG1 or N == NG2 or N == NG3) {cout << "NO" << endl; return;}
  int cnt = 0;
  while (N > 0) {
    if (N-3 != NG1 and N-3 != NG2 and N-3 != NG3) N -= 3;
    else if (N-2 != NG1 and N-2 != NG2 and N-2 != NG3) N -= 2;
    else if (N-1 != NG1 and N-1 != NG2 and N-1 != NG3) N -= 1;
    else {cout << "NO" << endl; return;}
    cnt++;
  }
  if (cnt > 100) {cout << "NO" << endl; return;}
  else cout << "YES" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
