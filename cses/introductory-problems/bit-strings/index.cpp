#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
typedef long long ll;


// ll power2(ll base, ll expo) {
//   if (expo == 0) return 1;

//   ll res = power(base, expo/2);
//   if (expo % 2) return res * res * base;
//   else return res * res;
// }

ll power(ll base, ll expo, ll MOD = 0) {
  ll res = 1;

  while(expo) {
    if(expo & 1LL) {
      res = MOD ? (res * base) % MOD : (res * base);
    }
    base = MOD ? (base * base) % MOD : (base * base);
    expo >>= 1LL;
  }

  return res;
}


void solve() {
  ll n = 0;
  cin >> n;

  cout << power(2, n, 1e9 + 7) << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
