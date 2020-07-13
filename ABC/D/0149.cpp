#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll n,k,r,s,p; cin >> n >> k;
  cin >> r >> s >> p;
  string t; cin >> t;
  vector<ll> score(n);
  if (t[0] == 'r') score[0] = p;
  else if (t[0] == 's') score[0] = r;
  else score[0] = s;
  for(int i = 1; i < k; i++) {
    if(t[i] == 'r') score[i] = score[i-1] + p;
    else if (t[i] == 's') score[i] = score[i-1] + r;
    else score[i] = score[i-1] + s;
  }
  for(int i = k; i < t.size(); i++) {
    if (t[i] == 'r') {
      if (t[i-k] == 'r') {
        t[i] = '*';
        score[i] = score[i-1];
      } else score[i] = score[i-1] + p;
    } else if (t[i] == 's') {
      if (t[i-k] == 's') {
        t[i] = '*';
        score[i] = score[i-1];
      } else score[i] = score[i-1] + r;
    } else if (t[i] == 'p') {
      if (t[i-k] == 'p') {
        t[i] = '*';
        score[i] = score[i-1];
      } else score[i] = score[i-1] + s;
    }
  }
  cout << score[n-1] << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
