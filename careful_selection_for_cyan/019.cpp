#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll D,n,m; cin >> D >> n >> m;
  ll all_dist = 0;
  vector<ll> d(n);
  rep(i,n-1) cin >> d[i+1];
  sort(d.begin(), d.end());
  vector<ll> k(m);
  rep(i,m) {
    cin >> k[i];
    ll dist = 2e9;
    auto it = lower_bound(d.begin(), d.end(), k[i]);
    if (it == d.end() or it == d.begin()) {
      dist = min(dist, 
                 min(abs(d[0]-k[i]), 
                     min(abs(d[0]-k[i]+D), abs(d[0]-k[i]-D))
                    )
                );
      dist = min(dist, 
                 min(abs(d[n-1]-k[i]), 
                     min(abs(d[n-1]-k[i]+D), abs(d[n-1]-k[i]-D))
                    )
                );
    } else {
      dist = min(dist, abs(*it-k[i]));
      dist = min(dist, abs(*it-k[i]-D));
      dist = min(dist, abs(*it-k[i]+D));
      dist = min(dist, abs(d[it-d.begin()-1] - k[i]));
      dist = min(dist, abs(d[it-d.begin()-1] - k[i]-D));
      dist = min(dist, abs(d[it-d.begin()-1] - k[i]+D));
    }
    all_dist += dist;
  }
  cout << all_dist << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
