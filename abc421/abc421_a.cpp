#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 100))
    exit(1);
  vector<string> S(N);
  rep (i, N) {
    string s;
    cin >> s;
    if ((s.size() < 1) || (s.size() > 10))
      exit(1);
    S[i] = s;
  }
  int X;
  string Y;
  cin >> X >> Y;
  if ((X < 1) || (X > N))
    exit(1);
  if ((Y.size() < 1) || (Y.size() > 10))
    exit(1);
  X--;
  if (S[X] == Y)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
