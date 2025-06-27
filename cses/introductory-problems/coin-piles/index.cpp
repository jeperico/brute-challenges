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
  ll a = 0, b = 0;
  cin >> a >> b;

  ll dif = abs(a - b);
  if((a < dif) || (b < dif)) {
    cout << "NO" << endl;
    return;
  }
  
  ll som = a + b;
  if(som % 3) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  int TC = 1;
  if(TC) {
    cin >> TC;
    while(TC--) solve();
  } else solve();
  return 0;
}
