#include <bits/stdc++.h>

using namespace std;

typedef long long i64;

void solve(void) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<bool> monocarpCorrectness(n + 1, 0);
    vector<int> notInList(m), monocarp(k);
    for (int i = 0; i < m; i++) {
        cin >> notInList[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> monocarp[i];
        monocarpCorrectness[monocarp[i]] = 1;
    }
    for (int i = 0; i < m; i++) {
        if (monocarpCorrectness[notInList[i]] == 0) {
            cout << (k >= n ? 1 : 0);
        } else {
            cout << (k - 1 >= n ? 1 : 0);
        }
    }
    cout << '\n';
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
