#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

struct phash{
    inline size_t operator()(const pair<int,int> & p) const{
        const auto h1 = hash<int>()(p.first);
        const auto h2 = hash<int>()(p.second);
        return h1 ^ (h2 << 1);
    }
};

void Main()
{
  int n; cin >> n;
  vector<P> a(n);
  unordered_set<P,phash> se;
  rep(i,n) {
    cin >> a[i].first >> a[i].second;
    se.insert(a[i]);
  }
  int maxarea = 0;
  rep(i,n) {
    int x1 = a[i].first;
    int y1 = a[i].second;
    for (int j = i + 1; j < n; j++) {
      int x2 = a[j].first;
      int y2 = a[j].second;
      int yd = - x1 + x2;
      int xd = y1 - y2;
      P p1(x1 + xd, y1 + yd);
      P p2(x2 + xd, y2 + yd);
      if (se.find(p1) != se.end()
         and se.find(p2) != se.end()) {
        // ここまで来たら存在する
      	int sqlen = abs(x1-p2.first)*abs(x1-p2.first)
        		+ abs(y1-p2.second)*abs(y1-p2.second); 
      	maxarea = max(maxarea, sqlen/2);
      }
      yd = x1 - x2;
      xd = - y1 + y2;
      p1.first = x1 + xd; p1.second = y1 + yd;
      p2.first = x2 + xd; p2.second = y2 + yd;
      if (se.find(p1) != se.end()
         and se.find(p2) != se.end()) {
        // ここまで来たら存在する
      	int sqlen = abs(x1-p2.first)*abs(x1-p2.first)
        		+ abs(y1-p2.second)*abs(y1-p2.second); 
      	maxarea = max(maxarea, sqlen/2);
      }
    }
  }
  cout << maxarea << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
