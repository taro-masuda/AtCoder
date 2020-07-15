#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  string s; cin >> s;
  int cnt = 0;
  int maxlen = 0;
  for(char c : s) {
    if (c == 'A' or c == 'T' or 
        c == 'G' or c == 'C') cnt++;
    else cnt = 0;
    maxlen = max(maxlen, cnt);
  }
  cout << maxlen << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}