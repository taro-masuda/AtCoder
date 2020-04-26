#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int A,B,C,D;
  char a,b,c,d;
  cin >> a >> b >> c >> d;
  A = (int)a - '0';
  B = (int)b - '0';
  C = (int)c - '0';
  D = (int)d - '0';
  rep(op1, 2) {
    rep(op2, 2) {
      rep(op3, 2) {
        int sum = 0;
        string s = "";
        if (op1 == 0) {
          sum += A+B;
          s += to_string(A) + "+" + to_string(B);
        } else {
          sum += A-B;
          s += to_string(A) + "-" + to_string(B);
        }
        if (op2 == 0) {
          sum += C;
          s += "+" + to_string(C);
        } else {
          sum -= C;
          s += "-" + to_string(C);
        }
        if (op3 == 0) {
          sum += D;
          s += "+" + to_string(D);
        } else {
          sum -= D;
          s += "-" + to_string(D);
        }
        s += "=7";
        if (sum == 7) {
          cout << s << endl;
          return;
        }
      }
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