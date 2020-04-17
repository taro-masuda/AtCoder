#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll K;
  cin >> K;
  ll cnt = 0;
  ll i = 0;
  while (cnt < K) {
    i++;
    string s = to_string(i);
    bool lunlun = true;
    for (int j = 1; j < s.size(); j++) {
      if (!(s[j] == s[j-1] || abs(s[j]-s[j-1]) == 1)) {
        lunlun = false;
        if (s.size()-j-1 > 0) {
          i += pow((ll)10, (ll)(s.size()-j-1));
          i = i - i % (ll)pow((ll)10, (ll)(s.size()-j-2));
          i--;
        }
        break;
      }
    }
    if(lunlun) {
      cnt++;
    }
  }
  cout << i << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
