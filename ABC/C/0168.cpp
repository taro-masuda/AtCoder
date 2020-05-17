#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

#define PI 3.14159265358979323846

void Main()
{
  ll A,B,H,M;
  cin >> A >> B >> H >> M;
  double angleH = 30.0*H + M/2.0;
  double angleM = 6.0*M;
  double theta = abs(angleH - angleM);
  cout << sqrt(A*A + B*B - 2.0 * A * B * cos(theta * PI / 180.0)) << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
