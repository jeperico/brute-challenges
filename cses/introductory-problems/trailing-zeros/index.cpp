#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
typedef long long ll;


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

ll factorial(ll number, ll MOD = 0) {
  ll res = 1;
  for(int i = 2; i <= number; i++) {
    res = MOD ? res * i % MOD : res * i;
  }
  return res;
}


void solve() {
  ll n = 0;
  cin >> n;

  while(n % 2 && n % 5) {
    if(n % 2 != 0) n /= 2;
    else if (n % 5 != 0) n /= 5;
  }

  cout << n << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
