#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

// const int MAXN = 2e5 + 500;
// ll array[MAXN];

void solve() {
  int n;
  cin >> n;
  vector<ll> arr(n);

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  ll a = ll(0.8);

  ll minMoves = 0;
  for(int i = 0; i < n - 1; i++) {
    ll prev = arr[i];
    ll next = arr[i+1];
    if(prev > next) {
      int move = prev - next;
      minMoves += move;
      arr[i+1] = prev;
    }
  }

  cout << minMoves << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
