#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll a[100000];
ll cs[100001] = {0};

const ll Q = 1000000007;　// 1,000,000,007

ll climbStairs(ll n) {
  if (n > 2) {
    if (cs[n] != (ll)0) return cs[n];
    else {
      cs[n] = (climbStairs(n-1)%Q + climbStairs(n-2)%Q)%Q;
      return cs[n];
    }
  } else return n;
}

void Main()
{
  ll N, M;
  cin >> N >> M;
  if (M==0) {cout << climbStairs(N) % Q << endl; return;}
  
  rep(i,M){
  	cin >> a[i];
  }
  rep(i,M-1){
    if (a[i+1]-a[i]==1) {cout << 0 << endl; return;}
  }
  ll pattern = 0;
  if (a[0] != 1) pattern = climbStairs(a[0]-1) % Q;
  else pattern = 1;
  for(int i = 1; i < M; i++){
    pattern = (pattern * (max(climbStairs(a[i]-a[i-1]-2),(ll)1)%Q)) % Q;
  }
  pattern = (pattern * (max(climbStairs(N-a[M-1]-1),(ll)1)%Q)) % Q;
  cout << pattern << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
