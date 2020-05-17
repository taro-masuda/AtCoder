#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N; cin >> N;
  int res = N%10;
  if (res==3) {cout << "bon" << endl;}
  else if (res==0 || res == 1 || res == 6 || res==8){
    cout << "pon" << endl;
  } else {
    cout << "hon" << endl;
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
