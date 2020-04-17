#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<iomanip>
#include<unordered_map>
using namespace std;

int A[200000];

int main (void) {
  int N;
  cin >> N;
  unordered_map<int,int> umap;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    if (umap.find(A[i]) == umap.end()) umap[A[i]] = 1;
    else umap[A[i]]++;
  }
  
  // 1つずつ自分を除いた場合の数を出力していく
  unordered_map<int,long long> umap_ans;
  unordered_map<int, long long> umap_ans_nomiss;
  
  long long nomiss = 0;
  for (int i = 0; i < N; i++) {
    if (umap_ans_nomiss.find(A[i]) == umap_ans_nomiss.end()) {
      umap_ans_nomiss[A[i]] = (long long)umap[A[i]] * (long long)(umap[A[i]]-1)/2;
      umap_ans[A[i]] = (long long)(umap[A[i]]-1)*(long long)(umap[A[i]]-2)/2;
    }
  }
  for (unordered_map<int,long long>::iterator itr = umap_ans_nomiss.begin(); itr != umap_ans_nomiss.end(); ++itr) {
    nomiss += itr->second;
  }
  for (int i = 0; i < N; i++) {
    long long cnt = 0;
    cnt += nomiss;
    cnt -= umap_ans_nomiss[A[i]];
    cnt += umap_ans[A[i]];
    cout << cnt << endl;

  }

  
  return 0;
} 
