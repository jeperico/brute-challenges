#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);
  for(int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }


  if (n == 1) cout << 1;
  else if (n < 4) cout << "NO SOLUTION";
  else {
    int qtd5 = n % 4;
    int qtd4 = (n / 4) - qtd5;
    int act = 0;

    while (qtd5 > 0) {
      int el = arr[act + 4];
      arr[act + 4] = arr[act + 0];
      arr[act + 0] = arr[act + 3];
      arr[act + 3] = arr[act + 2];
      arr[act + 2] = el;

      qtd5 -= 1;
      act += 5;
    }

    while (qtd4 > 0) {
      int el = arr[act + 2];
      arr[act + 2] = arr[act + 0];
      arr[act + 0] = arr[act + 1];
      arr[act + 1] = arr[act + 3];
      arr[act + 3] = el;

      qtd4 -= 1;
      act += 4;
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
