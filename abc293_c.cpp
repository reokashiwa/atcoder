#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int recursive_dfs (int x, int y, int H, int W,
		   vector<vector<int>> A, vector<int> R, int num) {
  // 重複チェック (重複していたらそれ以降の探索は無意味なので、ルートを1つ戻して次へ)
  cout << x << ", " << y << ": [";
  rep(i, R.size() - 1) {
    cout << R[i] << ", ";
  }
  cout << R[R.size() - 1] << "]" << endl;
  vector<int> S(R.size());
  rep(i, R.size()) {
    S[i] = R[i];
  }
  sort(S.begin(), S.end());
  rep(i, S.size() - 1) {
    if (S[i] == S[i + 1]) {
      cout << "duplicate true" << endl;
      R.pop_back();
      cout << "[";
      rep(i, R.size() - 1) {
	cout << R[i] << ", ";
      }
      cout << R[R.size() - 1] << "]" << endl;
      return 0;
    }
  }

  // 到達チェック
  if ((x == H - 1) && (y == W - 1)) {
    num++;
    R.pop_back();
    return 0;
  }
  // 右に進む
  if (x + 1 < H) { // 進めるかどうかチェック
    R.push_back(A[x + 1][y]);
    recursive_dfs (x + 1, y, H, W, A, R, num);
  }

  // 下に進む
  cout << "[";
  rep(i, R.size() - 1) {
    cout << R[i] << ", ";
  }
  cout << R[R.size() - 1] << "]" << endl;

  if (y + 1 < W) {
    R.push_back(A[x][y + 1]);
    recursive_dfs (x, y + 1, H, W, A, R, num);
  }

  R.pop_back();
  return 0;
}

int main() {
  int H, W;
  cin >> H >> W;
  if ((H < 2) || (H > 10))
    exit(1);
  if ((W < 2) || (W > 10))
    exit(1);

  vector<vector<int>> A(H, vector<int>(W));
  rep(y, H) {
    rep(x, W) {
      int a;
      cin >> a;
      if ((a < 1) || (a > 10e9))
	exit(1);
      A[x][y] = a;
    }
  }

  vector<int> R;
  int num = 0;
  R.push_back(A[0][0]);
  recursive_dfs(0, 0, H, W, A, R, num);
  cout << num << endl;
}
