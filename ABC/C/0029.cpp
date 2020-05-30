#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  queue<string> q;
  q.push("");
  while (!q.empty()) {
    string s = q.front(); q.pop();
    if (s.size() == N) {cout << s << endl;}
    else {
      q.push(s + "a");
      q.push(s + "b");
      q.push(s + "c");
    }
  }
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
