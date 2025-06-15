#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 10))
    exit(1);
  if ((M < 1) || (M > 10))
    exit(1);
  vector<string> S(N);
  rep(i, N) {
    string s;
    cin >> s;
    if (S.size() != M)
      exit(1);
    rep(j, M) {
      if ((s[j] != 'o') && (s[j] != 'x'))
	exit(1);
    }
  }
  vector<string> Q;
  vector<int> q;
  Q.push_back(S[0]);
  q.push_back(0);
  int min = 10;
  while(Q.size() > 0) {
    // まず判定します。
    string s;
    rep(i, M)
      s.push_back('x');
    rep(i, Q.size()) {
      rep(j, M) {
	if ((s[j] == 'o') || (Q[i][j] == 'o'))
	  s[j] = 'o';
      }
    }
    bool flag = true;
    rep(i, M) {
      if (s[i] == 'x') {
	flag = false;
	break;
      }
    }
    // 判定がtrueなら最後尾を除去し、新たな最後尾を++
    // 新たな最後尾を++したら > Nになったら、もひとつ除去して最後尾++
    if (flag) {
      if (Q.size() < min) {
	min = Q.size();
	Q.pop_back();
	q.pop_back();
      }
    }
    
    int last_index = q[q.size() - 1];
    if (last_index < N - 1) {
      Q.push_back(S[last_index + 1]);
      q.push_back(last_index + 1);
    } else {
      Q.pop_back();
      q.pop_back();
    }
  }
  
}
