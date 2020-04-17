#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


void Main()
{
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i,N){ cin >> d[i]; }
  sort(d.begin(), d.end());
  int samenum = 0;
  for(int k = 1; k <= 100000; k++) {
    auto idx = lower_bound(d.begin(), d.end(), k);
    if (idx-d.begin() == N / 2) samenum++;
  }
  cout << samenum << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
