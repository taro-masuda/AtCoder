#include<bits/stdc++.h>
using namespace std;

long long f[50] = {};
long long fib(long long n) {
  if (f[n] > 0) return f[n];
  if (f[n-1] == 0){
    f[n-1] = fib(n-1);
  }
  if (f[n-2] == 0){
    f[n-2] = fib(n-2);
  }
  f[n] = f[n-1] + f[n-2];
  return f[n];
}

void Main()
{
  f[0] = 1; f[1] = 1;
  long long n; cin >> n;
  cout << fib(n) << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
