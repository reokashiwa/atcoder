#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool second_check(string T, string S) {
  if (T.size() + 1 != S.size())
    return false;
  string::iterator t = T.begin();
  string::iterator s = S.begin();
  rep (i, T.size()) {
    if (*t == *s) {
      ++t;
      ++s;
      continue;
    }
    else {
      S.erase(s);
      if (T == S)
	return true;
      else
	return false;
    }
  }
  return true;
}

bool forth_check(string T, string S) {
  if (T.size() != S.size())
    return false;

  string::iterator t = T.begin();
  string::iterator s = S.begin();
  rep (i, T.size()) {
    if (*t == *s) {
      ++t;
      ++s;
      continue;
    }
    else {
      T.erase(t);
      S.erase(s);
      if (T == S)
	return true;
      else
	return false;
    }
  }
  return true;
      
}

int main() {
  int N;
  cin >> N;
  if ((N < 1) || (N > 5 * 10e5))
    exit(1);
  string T;
  cin >> T;
  if ((T.size() < 1) || (T.size() > 5 * 10e5))
    exit(1);

  vector<int> K;
  rep (i, N) {
    string S;
    cin >> S;
    if ((S.size() < 1) || (S.size() > 5 * 10e5))
      exit(1);

    if (T == S) {
      K.push_back(i);
      continue;
    }

    if (second_check(T, S)) {
      K.push_back(i);
      continue;
    }

    if (second_check(S, T)) {
      K.push_back(i);
      continue;
    }

    if (forth_check(T, S)) {
      K.push_back(i);
      continue;
    }
  }
  cout << K.size() << endl;
  rep (i, K.size()) {
    cout << K[i] + 1 << " ";
  }
  cout << endl;
}
