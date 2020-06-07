#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  vector<string> S(5);
  rep(i,5) cin >> S[i];
  string out = "";
  int i = 1;
  while (i < 4*N+1) {
    //1段目
    if (S[0][i] == '#' and S[0][i+1] == '#' and S[0][i+2] == '#') {
      //0,2,3,5,6,7,8,9
      if (S[1][i] == '#' and S[1][i+1] == '.' and S[1][i+2] == '#') {//0,8,9
        if (S[2][i+1] == '.') out += "0";
        else if (S[3][i] == '.') out += "9";
        else out += "8";
      } else if (S[1][i+2] == '#') { // 2,3,7
        if (S[2][i] == '.') out += "7";
        else if (S[3][i] == '#') out += "2";
        else out += "3";
      } else { // 5,6
        if (S[3][i] == '.') out += "5";
        else out += "6";
      }
    } else if (S[0][i] == '#' and S[0][i+1] == '.') {
      out += "4";
    } else {
      out += "1";
    }
    i += 4;
  }
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
