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
  // Get the word to transform into a palindrome
  string word;
  cin >> word;
  int n = word.length();

  // Count for the odds letters 
  int single = 0;

  // Iterate for all left letters to replace in order
  for(int i = 0; i < n / 2; i++) {
    // Iterate for the following letters able to switch
    for(int j = i + 1; j < n - i; j++) {
      int last = n - i - 1;
      // If found a pair, switch for the current last
      if(word[i] == word[j]) {
        char temp = word[last];
        word[last] = word[j];
        word[j] = temp;
        break;
      }
      // On single letters change by the middle and try again
      if(j == last) {
        single++;
        int half = n / 2;
        char temp = word[half];
        word[half] = word[i];
        word[i] = temp;
        i--;
        // If more odd letters than the nedded, NO RESULTS
        if(single == 2 || (single == 1 && n % 2 == 0)) {
          cout << "NO SOLUTION" << endl;
          return;
        }
        break;
      }
    }
  }
  // Print the right solution, if have it
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
