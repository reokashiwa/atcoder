#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int Q;
  cin >> Q;
  if ((Q < 2) || (Q > 100))
    exit(1);
  map<int, int> bag;
  rep (i, Q) {
    int type;
    cin >> type;
    if ((type != 1) && (type != 2))
      exit(1);
    if (type == 1) {
      int x;
      cin >> x;
      if ((x < 1) || (x > 100))
	exit(1);
      if (bag.count(x) > 0)
	bag[x]++;
      else
	bag[x] = 1;
    } else {
      if (bag.size() > 0) {
	vector<int> key;
	for (auto p : bag) {
	  auto k = p.first;
	  key.push_back(k);
	}
	sort(key.begin(), key.end());
	cout << key[0] << endl;
	if (bag[key[0]] > 1)
	  bag[key[0]]--;
	else
	  bag.erase(key[0]);
      }
    }
  }
}
