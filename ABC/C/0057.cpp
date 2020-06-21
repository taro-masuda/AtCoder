#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll digit(ll N){
  ll cnt = 0;
  while (N > 0) {
    N /= 10; cnt++;
  }
  return cnt;
}

void Main()
{
  ll N; cin >> N;
  ll sqrtN = sqrt(N);
  ll minDigit = 100;
  for (ll i = sqrtN; i > 0; i--) {
    if (N%i == 0) {
      ll bigger = max(digit(i), digit(N/i));
      minDigit = min(minDigit, bigger);
    }
  }
  cout << minDigit << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
