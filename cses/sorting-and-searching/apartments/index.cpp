#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  vector<int> nSize(n);
  for(int i = 0; i < n; i++) {
    int el;
    cin >> el;
    nSize.at(i) = el;
  }

  vector<int> mSize(m);
  for(int i = 0; i < m; i++) {
    int el;
    cin >> el;
    mSize.at(i) = el;
  }

  int cases = 0;
  for(int elN : nSize) {
    // for(int elM : mSize) {
    for(int i = 0; i <= m; i++) {
      int elM = mSize[i];

      int small = elN - k;
      int big = elN + k;
      if(!(elM >= small && elM <= big)) continue;
      // cout << elM << " M - Small " << small << " <--> " << big << " Big" << endl;
      // cout << elN << "n - m" << elM << " <--> " << elN + k << " " << elM << endl;

      mSize[i] = 0;

      cases++;
    }
  }

  cout << cases << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
