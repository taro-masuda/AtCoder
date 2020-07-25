#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > prime_factorize(int N) {
    vector<pair<int, int> > res;
    for (int a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        int ex = 0;

        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        res.push_back({a, ex});
    }

    if (N != 1) res.push_back({N, 1});
    return res;
}

void Main()
{
  int N;
    cin >> N;
    vector<pair<int, int> > res = prime_factorize(N);
    cout << N << ":";
    for (pair<int, int> p : res) {
        for (int i = 0; i < p.second; ++i) cout << " " << p.first;
    }
    cout << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(20);
  Main();
  return 0;
}
