#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N, Y;
  cin >> N >> Y;
  ll senMai = Y / 1000;
  for (int i = 0; i <= senMai / 10; i++) {
    for (int g = 0; g <= senMai / 5; g++) {
      if ((Y - 5000*g - 10000*i)%1000 != 0 || Y - 5000*g - 10000*i < 0) continue;
      int s = (Y - 5000*g - 10000*i)/1000;
      if (s+g+i == N) {cout << i << " " << g << " " << s << endl; return;}
    }
  }
  
  cout << -1 << " " << -1 << " " << -1 << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
