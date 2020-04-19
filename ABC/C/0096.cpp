#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

char s[50][50];

void Main()
{
  int H, W;
  cin >> H >> W;
  rep (i,H){
    rep(j,W) {
      cin >> s[i][j];
    }
  }
  rep(i,H) {
    rep(j,W) {
      if (s[i][j] == '#') {
        bool canPaint = false;
        if (i > 0) {
          if (s[i-1][j] == '#') canPaint = true;
        }
        if (j > 0) {
          if (s[i][j-1] == '#') canPaint = true;
        }
        if (i < H-1) {
          if (s[i+1][j] == '#') canPaint = true;
        }
        if (j < W-1) {
          if (s[i][j+1] == '#') canPaint = true;
        }
        if (!canPaint) {cout << "No" << endl; return;}
      }
    }
  }
  cout << "Yes" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}