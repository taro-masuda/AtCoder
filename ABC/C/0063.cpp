#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<int> s(N);
  int sum = 0;
  int min_not_div_10 = 101;
  rep(i,N) {
    cin >> s[i]; 
    sum += s[i];
    if (s[i] % 10 != 0) min_not_div_10 = min(min_not_div_10, s[i]);
  }
  if (sum % 10 != 0) {cout << sum << endl;}
  else if (min_not_div_10 < 101) {cout << sum-min_not_div_10 << endl;}
  else cout << 0 << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
