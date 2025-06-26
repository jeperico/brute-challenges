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
  ll a = 2;
  ll b = 1;

  while(a > 0 && b > 0) {
    if(a == b) {
      if(a % 3 == 0 && a % 8 == 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
      // if(a % 3) return 1;
      // else return 0;
    }

    if(a > b) {
      a -= 2;
      b -= 4;
    } else {
      a -= 2;
      b -= 1;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
