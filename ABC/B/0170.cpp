#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int X,Y;
  cin >> X >> Y;
  rep(x,101){
    rep(y,101){
      if (x+y == X and 2*x+y*4==Y) {cout << "Yes" << endl; return;}
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
