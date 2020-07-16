#include<iostream>
#include<string>
#include <algorithm>
#include <functional>
#include <vector>
#include <iomanip>

#include<math.h>
using namespace std;

int x[8], y[8];

int factorial(int n){
  if (n <= 1) return 1;
  else return n*factorial(n-1);
}

int main(void)
{
  int N;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> x[i] >> y[i];
  }
  long double d = 0.0;
  vector<int> v(N);
  for (int i = 0; i < N; i++){
    v[i] = i+1;
  }
  do {
    for (int i = 0; i < N-1; i++){
      d += sqrt( (long double)( (x[v[i]-1] - x[v[i+1]-1]) * (x[v[i]-1] - x[v[i+1]-1]) +
                (y[v[i]-1] - y[v[i+1]-1]) * (y[v[i]-1] - y[v[i+1]-1]) ) );
    }
  } while (next_permutation(v.begin(), v.end()));
  
  d /= factorial(N);
  cout << setprecision(20) << d << endl;
  return 0;
}
