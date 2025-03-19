#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);

  
  if (n == 2 || n == 3) cout << "NO SOLUTION";
  else {
    int el = 0;
    for(int i = 1; i <= n; i ++) if(i % 2 == 0) {
      arr[el] = i;
      el += 1;
    }
    for(int i = 1; i <= n; i ++) if(i % 2 != 0) {
      arr[el] = i;
      el += 1;
    }

    for(int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
