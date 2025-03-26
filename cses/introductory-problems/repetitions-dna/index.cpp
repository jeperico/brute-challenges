#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve() {
  string dna;
  cin >> dna;

  char el;
  int som = 0;
  int res = 0;
  for (int i = 0; i < dna.size(); i++) {
    som = el == dna[i] ? som + 1 : 1;
    el = dna[i];
    if (som > res) res = som;
  }

  cout << res << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
