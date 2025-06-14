#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  if (S.size() != N)
    exit(1);

  int num_of_doublequatation = 0;
  rep(i, N) {
    if (((S[i] < 'a') || (S[i] > 'z')) && (S[i] != ',') && (S[i] != '"'))
      exit(1);
    if (S[i] == '"')
      num_of_doublequatation++;
  }
  if (num_of_doublequatation % 2 != 0)
    exit(1);

  bool inside_of_doublequatation = false;
  rep(i, N) {
    if (S[i] == '"')
      if (inside_of_doublequatation == true)
	inside_of_doublequatation = false;
      else
	inside_of_doublequatation = true;

    if (S[i] == ',')
      if (inside_of_doublequatation == false)
	S[i] = '.';
  }
  cout << S << endl;
}
