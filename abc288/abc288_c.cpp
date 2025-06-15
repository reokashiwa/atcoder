#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  if ((N < 1) || (N > 2 * 10e5))
    exit(1);
  if ((M < 0) || (N > 2 * 10e5))
    exit(1);

  vector<vector<int>> tree;  
  rep (i, M) {
    int a, b;
    cin >> a >> b;
    if ((a < 1) || (a > N))
      exit(1);
    if ((b < 1) || (b > N))
      exit(1);
    if (a == b)
      exit(1);

    bool flag = false;    
    rep (j, tree.size()) {
      rep (k, tree[j].size()) {
	if (tree[j][k] == a) {
	  tree[j].push_back(b);
	  flag = true;
	  // cout << "push!" << endl;
	  break;
	} else if (tree[j][k] == b) {
	  tree[j].push_back(a);
	  flag = true;
	  // cout << "push!!" << endl;
	  break;
	}
      }
    }
    if (flag == false) {
      vector<int> branch;
      branch = { a, b };
      tree.push_back(branch);
      //      cout << "push!!!" << endl;
    }
  }

  int count = 0;
  rep (i, tree.size()) {
    sort(tree[i].begin(), tree[i].end());
    for (int j = 1; j < (int) tree[i].size(); j++) {
      if (tree[i][j - 1] == tree[i][j])
	count++;
    }
  }
  cout << count << endl;
}
