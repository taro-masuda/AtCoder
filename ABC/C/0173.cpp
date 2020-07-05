#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

vector<int> IntegerToVector(int bit, int N) {
    vector<int> S;
    for (int i = 0; i < N; ++i) {
        if (bit & (1 << i)) {
            S.push_back(i);
        }
    }
    return S;
}

void Main()
{
  int h,w,k; cin >> h >> w >> k;
  vector<vector<char>> c(h, vector<char>(w));
  int amount = 0;
  rep(i,h) {
    rep(j,w){
      cin >> c[i][j];
      if (c[i][j] == '#') amount++;
    }
  }
  vector<vector<char>> d(h, vector<char>(w));
  int tori = 0;
  for (int bit = 0; bit < (1 << h); ++bit) {
        // どれを選ぶか
        vector<int> S = IntegerToVector(bit, h);
    	for (int bi2 = 0; bi2 < (1<<w); ++bi2) {
            d = c;
          	vector<int> T = IntegerToVector(bi2, w);
          	int nokori = amount;
          	for (int i : S) {
              rep(j, w) {
                if (d[i][j] == '#') {d[i][j] = 'a'; nokori--;}
              }
            }
	        for (int j : T) {
              rep(i,h) {
                if (d[i][j] == '#') {d[i][j] = 'a'; nokori--;}
              }
            }
            if (nokori == k) tori++;
        }
  }
  cout << tori << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
