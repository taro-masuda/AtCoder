#include<bits/stdc++.h>
using namespace std;

void Main()
{
  int n,x; cin >> n >> x;
  while (n != 0 or x != 0) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = i+1; j <= n; j++) {
        if (x-i-j > 0 and x-i-j <= n 
            and x-i-j > j) {
          cnt++;
        }
      }
    }
    cout << cnt << endl;
    cin >> n >> x;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
