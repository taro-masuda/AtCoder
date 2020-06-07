#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<vector<char>> a(N, vector<char>(N));
  rep(i,N){
    string ai;
    cin >> ai;
    rep(j,N) a[i][j] = ai[j]; 
  }
  int stt = 0, end = N-1;
  string out = "";
  bool done = false;
  while(stt < end){
    for (char cs : a[stt]) {
      for (char ce : a[end]) {
        if (cs == ce) {
          out += cs; done = true; break;
        }
      }
      if (done) break;
    }
    if (!done) {cout << -1 << endl; return;}
    stt++; end--;
    done = false;
  }
  cout << out;
  if (N%2!=0) cout << a[N/2][0];
  reverse(out.begin(), out.end());
  cout << out << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
