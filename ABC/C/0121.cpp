#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N, M;
  cin >> N >> M;
  vector<pair<ll,ll>> AB(N);
  rep(i,N) {
    cin >> AB[i].first >> AB[i].second;
  }
  sort(AB.begin(), AB.end());
  ll money = 0;
  ll buy = 0;
  rep(i,N) {
    if (buy + AB[i].second >= M) {
      ll buyNum = M - buy;
      money += buyNum * AB[i].first;
      break;
    } else {
      money += AB[i].second * AB[i].first;
      buy += AB[i].second;
    }
  }
  cout << money << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
