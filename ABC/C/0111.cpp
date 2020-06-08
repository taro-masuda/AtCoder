#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int n; cin >> n;
  vector<int> v(n);
  vector<int> odds(100000);
  vector<int> evens(100000);
  rep(i,n) {
    cin >> v[i]; v[i]--;
    if (i%2==0) odds[v[i]]++;
    else evens[v[i]]++;
  }
  int oddmax = 0;
  int evenmax = 0;
  int oddsecondmax = 0, evensecondmax = 0;
  int oddnum, evennum;
  rep(i,100000){
    if (oddmax < odds[i]){
      oddsecondmax = oddmax;
      oddmax = max(oddmax, odds[i]);
      oddnum = i;
    } else oddsecondmax = max(oddsecondmax, odds[i]);
    if (evenmax < evens[i]) {
      evensecondmax = evenmax;
      evenmax = max(evenmax, evens[i]);
      evennum = i;
    } else evensecondmax = max(evensecondmax, evens[i]);
  }
  if (oddnum != evennum) cout << n-oddmax-evenmax << endl;
  else {
    cout << min(n-evenmax-oddsecondmax, n-oddmax-evensecondmax) << endl;
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
