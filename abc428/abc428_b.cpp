#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, K;
  cin >> N >> K;
  if ((N < 1) || (N > 100))
    exit(1);
  if ((K < 1) || (K > 100))
    exit(1);
  if (K > N)
    exit(1);
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);
  rep (i, N) {
    if ((S[i] < 'a') || (S[i] > 'z'))
      exit(1);
  }
  map<string, int> P;
  for (int i = 0; i < N - K + 1; i++) {
    string s = "";
    for (int j = i; j < i + K; j++)
      s = s + S[j];
    if (P.count(s))
      P[s]++;
    else
      P[s] = 1;
  }
  int maxnum = 0;
  for (auto p : P)
    maxnum = max(p.second, maxnum);
  cout << maxnum << endl;
  vector<string> M;
  for (auto p : P) {
    if (p.second == maxnum)
      M.push_back(p.first);
  }
  sort(M.begin(), M.end());
  rep (i, M.size())
    cout << M[i] << " ";
  cout << endl;
}
