#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  vector<string> words = {"and", "not", "that", "the", "you"};
  int N;
  cin >> N;
  
  bool flag = false;
  rep (i, N) {
    string W;
    cin >> W;

    rep (j, words.size()) {
      if (W == words[j]) {
	flag = true;
	break;
      }
    }
    if (flag)
      break;
  }
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
