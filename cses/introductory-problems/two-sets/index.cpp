#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
typedef long long ll;


void solve() {
  ll n;
  cin >> n;

  int modN = n % 4;
  if (modN == 0) {
    cout << "YES" << endl;
    // L1
    cout << n / 2 << endl;
    for (int i = 1; i <= n; i++) {
      int modI = i % 4;
      if (modI == 0 || modI == 1) cout << i << " ";
    }
    cout << endl;
    // L2
    cout << n / 2 << endl;
    for (int i = 1; i <= n; i++) {
      int modI = i % 4;
      if (modI == 2 || modI == 3) cout << i << " ";
    }
  } else if (modN == 3) {
    cout << "YES" << endl;
    // L1
    cout << n / 2 + 1 << endl;
    cout << 1 << " " << 2 << " ";
    for (int i = 4; i <= n; i++) {
      int modI = i % 4;
      if (modI == 0 || modI == 3) cout << i << " ";
    }
    cout << endl;
    // L2
    cout << n / 2 << endl;
    cout << 3 << " ";
    for (int i = 4; i <= n; i++) {
      int modI = i % 4;
      if (modI == 1 || modI == 2) cout << i << " ";
    }
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
