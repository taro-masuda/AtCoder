#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int H[100000];
bool down[100000] = {false};

void Main()
{
  int N;
  cin >> N;
  rep(i,N) {
    cin >> H[i];
  }
  rep(i,N-1) {
    if (H[i] - H[i+1] > 1) {cout << "No" << endl; return;}
    else if (H[i] - H[i+1] == 1) {
      H[i]--;
      down[i] = true;
    }
  }
  rep(i,N-1){
    if (H[i] - H[i+1] > 1){cout << "No" << endl; return;}
    else if (H[i] - 1 == H[i+1]) {
      if (!down[i]) {
        down[i] = true; H[i]--;
        i = -1;
      } else {cout << "No" << endl; return;}
    }
  }
  cout << "Yes" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
