#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  vector<char> v;
  string S;
  cin >> S;
  int N = S.size();
  rep(i,N) {
    v.push_back(S[i]);
  }
  int removed = 0;
  int idx = 0;
  int vsize = v.size();
  while (idx < vsize-1) {
    //cout << idx << ", " << v.size() << endl;
    if (v[idx] != v[idx+1]) {
      v.erase(v.begin()+idx); v.erase(v.begin()+idx);
      idx = 0; //最初からチェックし直し
      removed += 2;
    } else idx++;
    vsize = v.size();
  }
  cout << removed << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
