#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int n; cin >> n;
  vector<int> a(n);
  vector<string> odd, even;
  rep(i,n) {
    cin >> a[i];
    if (i % 2 == 0) even.push_back(to_string(a[i]));
    else odd.push_back(to_string(a[i]));
  }
  if (n % 2 == 0) {
  	reverse(odd.begin(), odd.end());
  	for (string s : odd) cout << s << " ";
  	for (string s : even) cout << s << " ";
  } else {
  	reverse(even.begin(), even.end());
    for (string s : even) cout << s << " ";
  	for (string s : odd) cout << s << " ";
  }
  cout << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
