#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N,A,B,C,D,E;
  cin >> N;  cin >> A;  cin >> B;  cin >> C; cin >> D; cin >> E;
  if (min({N, A, B, C, D, E}) == N) {cout << 5 << endl; return;}
  ll minutes = 0;
  minutes += N / A + min(N % A, (ll)1); //最後の1人がAで移動しきる時間
  ll restPeople = N - (minutes-1) * min(A,B);
  minutes += restPeople / B + min(restPeople % B, (ll)1);
  restPeople = N - (minutes-2) * min({A,B,C});
  minutes += restPeople / C + min(restPeople % C, (ll)1);
  restPeople = N - (minutes-3) * min({A,B,C,D});
  minutes += restPeople / D + min(restPeople % D, (ll)1);
  restPeople = N - (minutes-4) * min({A,B,C,D,E});
  minutes += restPeople / E + min(restPeople % E, (ll)1);
  cout << minutes << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
