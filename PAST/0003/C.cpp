#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll A,R,N; cin >> A >> R >> N;
  ll nkou = A;
  rep(i,N-1){
    nkou *= R;
  	if (nkou > 1e9) { cout << "large" << endl; return;}
  }
  cout << nkou << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
