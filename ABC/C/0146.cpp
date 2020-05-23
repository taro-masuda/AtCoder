#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll digit(ll num) {
  ll cnt = 0;
  while (num > 0) {
    num /= 10;
    cnt++;
  }
  return cnt;
}

void Main()
{
  ll A,B,X; cin >> A >> B >> X;
  ll left = 0, right = 1e9 + 1;
  ll mid;
  while (left < right) {
    mid = (left + right) / 2;
    if (A*mid + B*digit(mid) <= X) {
      if (left == mid) break;
      left = mid;
    } else {
      right = mid;
    }
  }
  cout << mid << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}