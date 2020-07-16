#include<iostream>
#include<string>
using namespace std;

int P[8];
int Q[8];
bool Used[8] = {false};

int factorial(int n) {
  if (n <= 1) return 1;
  else return n*factorial(n-1);
}

int KthSmallest(int n) {
  int j = 0;
  for (int i = 0; i < n; i++){
  	if (!Used[i]) j++;
  }
  return j;
}

int main (void) {
  int N; 
  cin >> N;
  int a = 1, b = 1;
  
  for (int i = 0; i < N; i++){
    cin >> P[i];
    int k = KthSmallest(P[i]);
    Used[P[i]-1] = true;
    a += (k-1) * factorial(N-i-1);
  }
  for (int i = 0; i < N; i++) Used[i] = false;
  for (int i = 0; i < N; i++){
    cin >> Q[i];
    int k = KthSmallest(Q[i]);
    Used[Q[i]-1] = true;
    //cout << k-1 << "," << factorial(N-i-1) << endl;
    
    b += (k-1) * factorial(N-i-1);
  }
  //cout << a << " " << b << endl;
  cout << abs(a-b) << endl;
  
  return 0;
}
