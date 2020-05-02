#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll A,B,N;
  cin >> A >> B >> N;
  if (B <= N) {
    cout << (ll)(floor(A*(B-1)/B)) - A*(ll)(floor((B-1)/B)) << endl;
  } else {
    cout << (ll)(floor(A*N/B)) - A*(ll)floor(N/B) << endl;
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
