#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int K, A, B;
  cin >> K;
  cin >> A >> B;
  for (int i = A; i <= B; i++) {
    if (i%K == 0) {cout << "OK" << endl; return;}
  }
  cout << "NG" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
