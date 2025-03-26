#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


void solve() {
    int n;
    cin >> n;

    set<int> x;
    for(int i = 0; i < n; i++) {
        int el;
        cin >> el;
        x.insert(el);
    }

    cout << x.size();
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);
  solve();
  return 0;
}