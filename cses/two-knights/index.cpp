#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;


void solve() {
  int n;
  cin >> n;

  cout << 0 << endl;
  for(int i = 2; i <= n; i++) {
    ll square = (i*i) - 1;
    ll cases = (square * (square + 1)) / 2;
    ll removes = 0;

    if (i > 2) removes += 8; // Borda - Quinas
    if (i == 3) removes += 8; // Borda - SemiQuina - caso 3
    if (i > 3) removes += (8*3) + ((i-4) * 4); // Borda - Semiquina e Meio
    if (i > 3) removes += 16; // Line 2 - Quina
    if (i == 5) removes += 24; // Line 2 - SemiQuina - caso 5
    if (i > 5) removes += (i-4) * 6; // Line 2 - SemiQuina e Meio
    if (i > 4) removes += (i-4) * (i-4) * 8; // Meio
    cases -= (removes / 2);

    if (i == 5) cases -= 6;
    if (i > 5) cases -= 3 * ((i-4) * 5);

    cout << cases << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
