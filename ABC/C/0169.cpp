#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll A; cin >> A;
  string B; cin >> B;
  B = B.replace(B.end()-3, B.end()-2, "");
  ll Bll = stoi(B);
  cout << A*Bll/(ll)100 << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
