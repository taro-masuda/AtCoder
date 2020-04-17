#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll gcd(ll a, ll b)
{
  if (a%b == 0) {
    return(b);
  } else {
   return(gcd(b, a%b));
  }
}

ll lcm(ll a, ll b)
{
   return a * b / gcd(a, b);
}

void Main()
{
  ll A,B,C,D;
  cin >> A >> B >> C >> D;
  ll L = lcm(C,D);
  ll nowariB = B -  (B/C + B/D - B/L);
  ll nowariA = (A-1) - ((A-1)/C + (A-1)/D - (A-1)/L);
  cout << nowariB - nowariA << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
