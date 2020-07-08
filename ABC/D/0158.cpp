#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  string S; cin >> S;
  vector<char> s; 
  for(char c : S) s.push_back(c);
  ll Q; cin >> Q;
  
  vector<char>::iterator it;
  bool rev = false;
    
  rep(i,Q) {
    int command;
    cin >> command;
    if (command == 1) {
      rev = !rev;
    } else {
      int f; char c;
      cin >> f >> c;
      if (f == 1) {
        if (rev) s.push_back(c);
        else {
          it = s.begin();
	      s.insert(it, c);
        }
      } else {
        if (rev) {
          it = s.begin();
	      s.insert(it, c);
        } else s.push_back(c);
      }
    }
  }
  if (rev) {
    reverse(s.begin(), s.end());
  } 
  rep(i, s.size()) cout << s[i];
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
