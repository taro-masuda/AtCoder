#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<P> a(N);
  int height;
  rep(i,N) {
    cin >> height;
    a[i] = P(height, i+1);
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  rep(i,N) cout << a[i].second << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
