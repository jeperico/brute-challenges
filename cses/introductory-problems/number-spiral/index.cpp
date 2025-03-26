#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;


void solve() {
  int y, x;
  cin >> y >> x;

  ll maxPS = max(x, y);
  ll base = (maxPS * (maxPS - 1)) + 1;
  ll el = 0;

  if (x == y) el = base;
  
  if(maxPS % 2 == 0) {
    el = base + y - x;
  } else {
    el = base - y + x;
  }

  cout << el << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  int TC = 1;
  if(TC){
    cin >> TC;
    while(TC--) solve();
  } else solve();
  return 0;
}
