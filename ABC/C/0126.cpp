#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, K;
  cin >> N >> K;
  double p = 0.0;
  for (int i = 1; i <= N; i++) {
    double cur_p = 1.0;
    int winNum = 0;
    while (i * pow(2, winNum) < K) {
      cur_p *= 0.5;
      winNum++;
    }
    cur_p /= N;
    p += cur_p;
  }
  cout << p << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
