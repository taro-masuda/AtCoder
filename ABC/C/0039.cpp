#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  string S;
  cin >> S;
  if (S == "WBWBWWBWBWBWWBWBWWBW") cout << "Do" << endl;
  else if (S == "WBWWBWBWBWWBWBWWBWBW") cout << "Re" << endl;
  else if (S == "WWBWBWBWWBWBWWBWBWBW") cout << "Mi" << endl;
  else if (S == "WBWBWBWWBWBWWBWBWBWW") cout << "Fa" << endl;
  else if (S == "WBWBWWBWBWWBWBWBWWBW") cout << "So" << endl;
  else if (S == "WBWWBWBWWBWBWBWWBWBW") cout << "La" << endl;
  else if (S == "WWBWBWWBWBWBWWBWBWWB") cout << "Si" << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
