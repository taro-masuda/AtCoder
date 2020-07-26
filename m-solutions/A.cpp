#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int n;
  cin >> n;
  if (n < 600) cout << 8 << endl;
  else if (n < 800) cout << 7 << endl;
  else if (n < 1000) cout << 6 << endl;
  else if (n < 1200) cout << 5 << endl;
  else if (n < 1400) cout << 4 << endl;
  else if (n < 1600) cout << 3 << endl;
  else if (n < 1800) cout << 2 << endl;
  else cout << 1 << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
