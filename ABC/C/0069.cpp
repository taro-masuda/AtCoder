#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<int> a(N);
  int div2 = 0, div4 = 0, nodiv = 0;
  rep(i,N) {
    cin >> a[i];
    if (a[i] % 2 != 0) nodiv++;
    else if (a[i] % 4 == 0) div4++;
    else div2++;
  }
  if (div2 > 0) {
    if (div4 >= 1 + nodiv - 1) cout << "Yes" << endl;
    else cout << "No" << endl;
  } else {
    if (div4 >= nodiv - 1) cout << "Yes" << endl;
    else cout << "No" << endl;
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
