#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);

  int sum = 0;
  for(int i = 0; i < n - 1; i++) {
    cin >> arr[i];
    sum += i + 1;
  }
  sum += n;

  for(int el: arr) {
    sum -= el;
  }

  cout << sum << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
