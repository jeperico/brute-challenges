#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
typedef long long ll;


void solve() {
  ll n;
  cin >> n;

  ll result = 1;
  for (ll i = 1; i <= n; i++) result *= 2;

  cout << result << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
