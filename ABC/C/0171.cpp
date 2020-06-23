#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  ll N; cin >> N;
  ll slen = 0;
  string ans = "";
  ll num = N;
  
  if (N%(ll)26 > 0) {
    ans += (char)(N%(ll)26 + 'a' - 1);
    num -= N%(ll)26;
  } else {
    ans += 'z';
    num -= 26;
  }
  ll p = 1;
  
  while (pow((ll)26,p) <= N) {
    if (num/(ll)pow((ll)26,p) > 0) {
      if ((num/(ll)pow((ll)26,p)) % ((ll)26) > 0) 
      {  ans += (char)( (num/(ll)pow((ll)26,p)) % ((ll)26) + 'a' - 1);
        num = num - ((num/(ll)pow((ll)26,p)) % ((ll)26))*(ll)pow((ll)26,p);
      } else {
        ans += 'z';
        num = num - (ll)pow((ll)26,p);
      }
      
    } 
    p++;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
