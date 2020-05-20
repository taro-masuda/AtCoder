#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int txa, tya, txb, tyb, T, V;
  cin >> txa >> tya >> txb >> tyb >> T >> V;
  int n; cin >> n;
  rep(i,n) {
    int x,y;
    cin >> x >> y;
    double d = sqrt( (x-txa)*(x-txa) + (y-tya)*(y-tya) )
      		 + sqrt( (x-txb)*(x-txb) + (y-tyb)*(y-tyb) );
    if (d/V <= T) {cout << "YES" << endl; return;}
  }
  cout << "NO" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
