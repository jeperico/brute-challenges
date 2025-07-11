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
  // string word = "JJKKJSTFFKJST";
  string word;
  cin >> word;
  int n = word.length();

  // cout << "[" << word << "]" << endl;
  int single = 0;
  for(int i = 0; i < n / 2; i++) {
    // cout << "i - " << word[i] << endl;
    for(int j = i + 1; j < n - i; j++) {
      // cout << word[j] << endl;
      int last = n - i - 1;
      if(word[i] == word[j]) {
        // cout << "CHANGED" << endl;
        char temp = word[last];
        word[last] = word[j];
        word[j] = temp;
        break;
      }
      if(j == last) {
        single++;
        int half = n / 2;
        char temp = word[half];
        word[half] = word[i];
        word[i] = temp;
        i--;
        // cout << "NO = " << word << endl;
        if(single == 2 || single == 1 && n % 2 == 0) {
          cout << "NO SOLUTION" << endl;
          return;
        }
        break;
      }
    }
  }
  cout << word << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  int TC = 0;
  if(TC) {
    cin >> TC;
    while(TC--) solve();
  } else solve();
  return 0;
}
