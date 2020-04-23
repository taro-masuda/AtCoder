#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int c[3][3];
  rep(i,3) {
    rep(j,3){
  	  cin >> c[i][j];
    }
  }
  rep(a1,101){
    int b1 = c[0][0] - a1;
    int b2 = c[0][1] - a1;
    int b3 = c[0][2] - a1;
    rep(a2,101){
      rep(a3,101){
        if (a2 + b1 == c[1][0] && a3 + b1 == c[2][0] &&
            a2 + b2 == c[1][1] && a3 + b2 == c[2][1] &&
            a2 + b3 == c[1][2] && a3 + b3 == c[2][2]){
          cout << "Yes" << endl;
          return;
        }
      }
    }
  }
  cout << "No" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}