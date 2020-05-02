#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll X;
  cin >> X;
  ll money = 100;
  int i = 0;
  while (true) {
    i++;
    money += money/100;
    if (money >= X) {cout << i << endl; return;}
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
