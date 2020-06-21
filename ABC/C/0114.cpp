#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  int i[9] = {0,0,0,0,0,0,3,3,3};
  int ztfs[4] = {0,3,5,7};
  int tfs[3] = {3,5,7};
  int cnt = 0;
  for (int i0 : ztfs) {
    i[0] = i0;
    for (int i1 : ztfs) {
      i[1] = i1;
      for (int i2 : ztfs) {
        i[2] = i2;
        for (int i3 : ztfs) {
          i[3] = i3;
          for (int i4 : ztfs) {
            i[4] = i4;
            for (int i5 : ztfs) {
              i[5] = i5;
              for (int i6 : tfs) {
                i[6] = i6;
                for (int i7 : tfs) {
                  i[7] = i7;
                  for (int i8 : tfs) {
                    i[8] = i8;
                    int sum = 0;
                    bool check = true;
                    for (int j = 0; j < 8; j++) {
                      sum += i[j];
                      if (sum > 0 and i[j] == 0) {check = false; break;}
                    }
                    if (!check) continue;
                    int num = 0;
                    set<int> se;
                    for (int j = 0; j < 9; j++) {
                      int multiplier = pow(10, j);
                      num += multiplier * i[8-j];
                      se.insert(i[8-j]);
                    }
                    if (se.find(3) != se.end() and se.find(5) != se.end() and
                        se.find(7) != se.end() and num <= N) cnt++;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << cnt << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
