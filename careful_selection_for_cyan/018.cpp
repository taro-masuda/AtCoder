#include<bits/stdc++.h>
using namespace std;

void Main()
{
  int n,q; cin >> n;
  vector<int> S(n);
  for(int i = 0; i < n; i++) cin >> S[i];
  cin >> q;
  vector<int> T(q);
  int cnt = 0;
  for(int i = 0; i < q; i++) {
    cin >> T[i];
    if (binary_search(S.begin(), S.end(), T[i])) cnt++;
  }
  cout << cnt << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
