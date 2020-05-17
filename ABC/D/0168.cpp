#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

void Main()
{
  int N, M; cin >> N >> M;
  vector<int> A(M), B(M);
  rep(i,M) {
    cin >> A[i] >> B[i];
  }
  vector<int> shirube(N+1);
  rep(i,N) shirube[i] = 0;
  queue<int> q;
  set<int> visited;
  visited.insert(1);
  rep(i,M) {
    if (A[i] == 1) {shirube[B[i]] = 1; q.push(B[i]); visited.insert(B[i]);}
    if (B[i] == 1) {shirube[A[i]] = 1; q.push(A[i]); visited.insert(A[i]);}
  }
  vector<vector<int>> direction(N+1);
  rep(i,M) {
    direction[A[i]].push_back(B[i]);
    direction[B[i]].push_back(A[i]);
  }
  while (!q.empty()){
  	int cur = q.front(); q.pop();
    rep(i,direction[cur].size()) {
      if (visited.find(direction[cur][i]) == visited.end()){
        if (shirube[direction[cur][i]] == 0){
          q.push(direction[cur][i]); shirube[direction[cur][i]] = cur; visited.insert(direction[cur][i]);
        } else {cout << "No" << endl; return;}
      }
    }
  }
  cout << "Yes" << endl;
  for(int i = 2; i < N+1; i++) cout << shirube[i] << endl;
}

int main()
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
