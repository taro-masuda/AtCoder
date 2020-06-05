#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int sx, sy, tx,ty; cin >> sx >> sy >> tx >> ty;
  string path = "";
  int x = sx;
  while (x < tx) {path += "R"; x++;}
  int y = sy;
  while (y < ty) {path += "U"; y++;}
  while (x > sx) {path += "L"; x--;}
  while (y > sy) {path += "D"; y--;}
  path += "D"; y--;
  while (x < tx+1) {path += "R"; x++;}
  while (y < ty) {path += "U"; y++;}
  path += "L"; x--;
  path += "U"; y++;
  while (x > sx-1) {path += "L"; x--;}
  while (y > sy) {path += "D"; y--;}
  path += "R"; x++;
  cout << path << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
