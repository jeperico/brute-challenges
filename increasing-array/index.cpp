#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve() {
  int n;
  cin >> n;
  long array[n];

  

  for(int i = 0; i < n; i++) {
    cin >> array[i];
  }

  int minMoves = 0;
  for(int i = 0; i < sizeof(array); i++) {
    long next = array[i+1];
    long prev = array[i];
    if(prev > next) {
      move = (next - prev) + 1;
      if (minMoves < move) minMoves = move;
    }
  }

  cout << minMoves << endl;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}
