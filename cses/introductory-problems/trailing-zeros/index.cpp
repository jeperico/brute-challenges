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


int count(ll n) {
  if(!n) return 0;
  return (n / 5) + count(n / 5);
}


void solve() {
  ll n = 0;
  cin >> n;

  cout << count(n) << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
